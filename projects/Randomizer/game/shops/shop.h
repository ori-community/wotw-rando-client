#pragma once

#include <Common/ext.h>
#include <Core/api/uber_states/uber_state.h>
#include <variant>
#include <Core/property.h>

#include "Core/api/graphics/textures.h"

namespace randomizer::game::shops {
    enum class ShopType {
        Lupo,
        LupoMaps,
        Grom,
        Tuley,
        Opher,
        Twillen,
    };

    enum class SlotVisibility {
        Visible,
        Hidden,
        Locked,
    };

    struct ShopSlot {
        core::api::uber_states::UberState is_purchased_state;
    };

    /**
     * Shop slot type for shops that have a dedicated UI (Twillen, Grom, Opher, Lupo in Glades)
     */
    struct ShopUIShopSlot : ShopSlot {
        core::Property<std::string> name{""};
        core::Property<std::string> description{""};
        core::Property<std::string> icon_texture_identifier{"shard:0"};
        core::Property<bool> is_locked{false};
        core::Property<bool> is_hidden{false};
        core::Property<int> cost{0};

        ShopUIShopSlot();
        SlotVisibility visibility() const;

        std::shared_ptr<core::api::graphics::textures::TextureData> icon();

    private:
        // nullopt = cache dirty, value + nullptr = cache is valid but texture is not
        std::optional<std::shared_ptr<core::api::graphics::textures::TextureData>> icon_cache;
        core::reactivity::ReactiveEffect::ptr_t icon_effect;
    };

    /**
     * Shop slot type for shops that only have a cost. E.g. Lupo maps outside Glades.
     */
    struct CostOnlyShopSlot : ShopSlot {
        core::Property<int> cost;
    };

    template <int SLOT_COUNT, typename SLOT_T = ShopUIShopSlot>
    class Shop {
    public:
        using is_purchased_states_t = std::array<core::api::uber_states::UberState, SLOT_COUNT>;
        using slot_t = SLOT_T;

        explicit Shop(is_purchased_states_t is_purchased_states) {
            static_assert(std::is_base_of_v<ShopSlot, SLOT_T>, "Type specified as SLOT_T must inherit ShopSlot");

            for (auto& is_purchased_state : is_purchased_states) {
                m_slots[is_purchased_state].is_purchased_state = is_purchased_state;
            }
        }

        Shop(Shop&&) = delete;
        Shop(Shop const&) = delete;

        std::optional<std::reference_wrapper<SLOT_T>> slot(core::api::uber_states::UberState const& for_state) {
            auto it = m_slots.find(for_state);
            return it != m_slots.end() ? std::make_optional(std::ref(it->second)) : std::nullopt;
        }

        std::unordered_map<core::api::uber_states::UberState, SLOT_T>& slots() { return m_slots; }

    private:
        std::unordered_map<core::api::uber_states::UberState, SLOT_T> m_slots;
    };

    class ShopCollection {
    public:
        using opher_shop_t = Shop<12, ShopUIShopSlot>;
        using twillen_shop_t = Shop<8, ShopUIShopSlot>;
        using lupo_shop_t = Shop<3, ShopUIShopSlot>;
        using lupo_maps_shop_t = Shop<9, CostOnlyShopSlot>;
        using grom_shop_t = Shop<7, ShopUIShopSlot>;
        using tuley_shop_t = Shop<6, ShopUIShopSlot>;

        using any_shop_slot_reference_t = std::variant<std::reference_wrapper<ShopUIShopSlot>, std::reference_wrapper<CostOnlyShopSlot>>;

        ShopCollection();

        opher_shop_t& opher_shop() { return m_opher_shop; }
        twillen_shop_t& twillen_shop() { return m_twillen_shop; }
        lupo_shop_t& lupo_shop() { return m_lupo_shop; }
        lupo_maps_shop_t& lupo_maps_shop() { return m_lupo_maps_shop; }
        grom_shop_t& grom_shop() { return m_grom_shop; }
        tuley_shop_t& tuley_shop() { return m_tuley_shop; }

        const std::unordered_map<core::api::uber_states::UberState, any_shop_slot_reference_t>& slots();

    private:
        opher_shop_t m_opher_shop;
        twillen_shop_t m_twillen_shop;
        lupo_shop_t m_lupo_shop;
        lupo_maps_shop_t m_lupo_maps_shop;
        grom_shop_t m_grom_shop;
        tuley_shop_t m_tuley_shop;

        std::unordered_map<core::api::uber_states::UberState, any_shop_slot_reference_t> m_slots;

        template <typename SHOP_T = twillen_shop_t>
        void register_slots(SHOP_T& shop) {
            for (auto& [uber_state, slot] : shop.slots()) {
                m_slots.emplace(uber_state, std::ref(slot));
            }
        }
    };

    std::optional<ShopCollection::any_shop_slot_reference_t> shop_slot_from_state(core::api::uber_states::UberState state);

    bool is_owned(ShopSlot const& slot);
    void buy_item(ShopSlot const& slot);
    bool is_in_shop(ShopType type);

    ShopCollection& shops();
} // namespace randomizer::game::shops
