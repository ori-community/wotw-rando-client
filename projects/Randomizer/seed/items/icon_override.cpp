#include <Randomizer/seed/items/icon_override.h>
#include <magic_enum.hpp>

namespace randomizer::seed::items {
    void SetIconOverride::grant() {
        data->icon_override = core::Property<MapIcon>(icon);
    }

    std::string SetIconOverride::to_string() const {
        return std::format("set icon override for {} to {}", location.to_string(), magic_enum::enum_name(icon));
    };

    void ClearIconOverride::grant() {
        data->icon_override = std::nullopt;
    }

    std::string ClearIconOverride::to_string() const {
        return std::format("clear icon override for {}", location.to_string());
    }
}
