#pragma once

#include <Core/api/graphics/textures.h>
#include <Core/dynamic_value.h>
#include <Core/enums/static_text_entries.h>

#include <memory>

namespace randomizer::game::shops {

    enum class SlotVisibility {
        Visible,
        Hidden,
        Locked
    };

    struct SlotInfo {
        core::DynamicValue<std::string> name;
        core::DynamicValue<std::string> description;
        std::shared_ptr<core::textures::TextureData> icon;
    };

    struct ShopSlot {
        core::api::uber_states::UberState state;
        SlotInfo normal;
        SlotInfo hidden;
        SlotInfo locked;
        SlotVisibility visibility = SlotVisibility::Hidden;
        core::api::uber_states::UberState cost;
        bool uses_energy = false;

        SlotInfo& active_info() {
            switch (visibility) {
                case SlotVisibility::Visible:
                    return normal;
                case SlotVisibility::Hidden:
                    return hidden;
                default:
                    return locked;
            }
        }
    };

    template <typename T, class hasher = std::hash<T>>
    class ShopData {
    public:
        ShopData(std::vector<T> keys) {
            for (auto key : keys) {
                slots[key];
            }
        }

        ShopData(ShopData&&) = delete;
        ShopData(ShopData const&) = delete;

        ShopSlot* slot(T const& key) {
            auto it = slots.find(key);
            return it != slots.end() ? &it->second : nullptr;
        }

        ShopSlot const* slot(T const& key) const {
            auto it = slots.find(key);
            return it != slots.end() ? &it->second : nullptr;
        }

    private:
        std::unordered_map<T, ShopSlot, hasher> slots;
    };
} // namespace randomizer::game::shops
