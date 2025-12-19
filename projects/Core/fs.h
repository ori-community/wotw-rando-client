#pragma once

#include <Core/macros.h>
#include <filesystem>
#include <optional>

namespace core::fs {
    /**
     * Returns the absolute path to the requested file inside the assets directory while
     * also making sure it is inside the assets directory. If not, nullopt is returned.
     */
    CORE_DLLEXPORT std::optional<std::filesystem::path> get_confined_asset_path(const std::filesystem::path& relative_path);
}
