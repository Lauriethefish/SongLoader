#include "API.hpp"

#include "Paths.hpp"

#include "CustomTypes/SongLoader.hpp"

namespace RuntimeSongLoader::API {

    void RefreshSongs(bool fullRefresh) {
        SongLoader::GetInstance()->RefreshSongs(fullRefresh);
    }
    
    void AddSongsLoadedEvent(std::function<void(const std::vector<GlobalNamespace::CustomPreviewBeatmapLevel*>&)> event) {
        SongLoader::AddSongsLoadedEvent(event);
    }

    std::string GetCustomLevelsPrefix() {
        return CustomLevelPrefixID;
    }

    std::string GetCustomLevelsPath() {
        return BaseLevelsPath + CustomLevelsFolder + "/";
    }

    std::string GetCustomWIPLevelsPath() {
        return BaseLevelsPath + CustomWIPLevelsFolder + "/";
    }
}