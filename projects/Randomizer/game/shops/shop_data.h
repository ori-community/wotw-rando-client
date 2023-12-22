#pragma once

#include <Core/api/graphics/textures.h>
#include <Core/property.h>
#include <Core/enums/static_text_entries.h>

#include <memory>

namespace randomizer::game::shops {

    enum class SlotVisibility {
        Visible,
        Hidden,
        Locked
    };

    struct SlotInfo {
        core::Property<std::string> name;
        core::Property<std::string> description;
        std::shared_ptr<core::api::graphics::textures::TextureData> icon;
    };

    struct ShopSlot {
        core::api::uber_states::UberState state;
        SlotInfo normal;
        SlotInfo hidden;
        SlotInfo locked;
        bool is_locked;
        bool is_hidden;
        core::api::uber_states::UberState cost;
        bool uses_energy = false;

        SlotVisibility visibility() const {
            if (is_hidden) {
                return SlotVisibility::Hidden;
            }

            return is_locked ? SlotVisibility::Locked : SlotVisibility::Visible;
        }

        SlotInfo& active_info() {
            switch (visibility()) {
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
        explicit ShopData(std::vector<T> keys) {
            for (auto key : keys) {
                m_slots[key];
            }
        }

        ShopData(ShopData&&) = delete;
        ShopData(ShopData const&) = delete;

        ShopSlot* slot(T const& key) {
            auto it = m_slots.find(key);
            return it != m_slots.end() ? &it->second : nullptr;
        }

        ShopSlot const* slot(T const& key) const {
            auto it = m_slots.find(key);
            return it != m_slots.end() ? &it->second : nullptr;
        }

        std::vector<ShopSlot*> slots() {
            std::vector<ShopSlot*> slots;
            for (auto& slot : m_slots) {
                slots.push_back(&slot.second);
            }

            return slots;
        }

    private:
        std::unordered_map<T, ShopSlot, hasher> m_slots;
    };
} // namespace randomizer::game::shops
