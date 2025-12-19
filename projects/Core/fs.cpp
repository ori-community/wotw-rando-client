#include <Core/fs.h>

#include <Modloader/modloader.h>

namespace core::fs {
    std::optional<std::filesystem::path> get_confined_asset_path(const std::filesystem::path& relative_path) {
        const auto canonical_assets_path = std::filesystem::canonical(modloader::get_install_data_path("client/assets"));
        auto canonical_asset_path = std::filesystem::canonical(canonical_assets_path / relative_path);

        // Check whether canonical_asset_path is inside canonical_assets_path
        const auto mismatch_pair = std::mismatch(canonical_asset_path.begin(), canonical_asset_path.end(), canonical_assets_path.begin(), canonical_assets_path.end());
        if (mismatch_pair.second != canonical_assets_path.end()) {
            modloader::warn("fs", std::format("Tried to load asset from '{}' which is outside the assets directory.", relative_path.string()));
            return std::nullopt;
        }

        return canonical_asset_path;
    }
} // namespace core::fs
