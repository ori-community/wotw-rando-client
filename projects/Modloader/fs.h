#pragma once

#include <Modloader/macros.h>
#include <filesystem>
#include <optional>

namespace modloader::fs {
    /**
     * Returns the absolute path to the requested file inside the assets directory while
     * also making sure it is inside the assets directory. If not, nullopt is returned.
     */
    IL2CPP_MODLOADER_DLLEXPORT std::optional<std::filesystem::path> get_confined_asset_path(const std::filesystem::path& relative_path);
    IL2CPP_MODLOADER_DLLEXPORT std::filesystem::path get_randomizer_user_data_path(const std::filesystem::path& relative_path);
    IL2CPP_MODLOADER_DLLEXPORT std::filesystem::path get_logs_user_data_path(const std::filesystem::path& relative_path);
}
