#include <enums/static_text_entries.h>
#include <game/game.h>
#include <game/pickups/shops/general.h>
#include <game/system/message_provider.h>
#include <input/rando_bindings.h>
#include <interop/csharp_bridge.h>
#include <randomizer/text_database.h>
#include <uber_states/uber_state_interface.h>

#include <Common/ext.h>

#include <Il2CppModLoader/app/methods/CatlikeCoding/TextBox/TextBox.h>
#include <Il2CppModLoader/app/methods/CleverMenuItem.h>
#include <Il2CppModLoader/app/methods/GameController.h>
#include <Il2CppModLoader/app/methods/MessageBox.h>
#include <Il2CppModLoader/app/methods/Moon/uberSerializationWisp/PlayerUberStateShards.h>
#include <Il2CppModLoader/app/methods/PurchaseThingScreen.h>
#include <Il2CppModLoader/app/methods/ShopkeeperScreen.h>
#include <Il2CppModLoader/app/methods/ShopkeeperUIDetails.h>
#include <Il2CppModLoader/app/methods/ShopkeeperUIItem.h>
#include <Il2CppModLoader/app/methods/ShopkeeperUISubItem.h>
#include <Il2CppModLoader/app/methods/SpellUIExperience.h>
#include <Il2CppModLoader/app/methods/SpellUIShardEquipStatus.h>
#include <Il2CppModLoader/app/methods/SpiritShardUIShardBackdrop.h>
#include <Il2CppModLoader/app/methods/TimeUtility.h>
#include <Il2CppModLoader/app/methods/UnityEngine/GameObject.h>
#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>

using namespace modloader;
using namespace shops;
using namespace app::classes;
using namespace app::classes::UnityEngine;
using namespace app::classes::CatlikeCoding::TextBox;

#define GROM_ENABLED 0

namespace {
    uber_states::UberState spirit_light_spent(UberStateGroup::RandoState, 4);
    IL2CPP_INTERCEPT(SpellUIExperience, bool, Spend, (app::SpellUIExperience * this_ptr, int amount)) {
        bool worked = next::SpellUIExperience::Spend(this_ptr, amount);
        if (worked)
            spirit_light_spent.set(amount + spirit_light_spent.get());
        return worked;
    };

    constexpr float NORMAL_PURCHASE_TIME = 0.4f;
    constexpr float FAST_PURCHASE_TIME = 0.01f;
    bool quick_buy = false;

    IL2CPP_INTERCEPT(PurchaseThingScreen, void, PurchaseInput, (app::PurchaseThingScreen * this_ptr)) {
        this_ptr->fields.PurchaseCooldown = 0.1f;
        this_ptr->fields.PurchaseTime = quick_buy ? FAST_PURCHASE_TIME : NORMAL_PURCHASE_TIME;
        next::PurchaseThingScreen::PurchaseInput(this_ptr);
    }
    // Generic --------------------------------

    // All of this code is horrendous.
    // ---------------------------------------------------
    bool stop_shop_overwrite = false;
    bool should_shop_overwrite = false;
    IL2CPP_INTERCEPT(ShopkeeperScreen, void, Show, (app::ShopkeeperScreen * this_ptr)) {
        if (il2cpp::is_assignable(this_ptr, "", "WeaponmasterScreen") ||
            il2cpp::is_assignable(this_ptr, "", "ShardUpgradeScreen")) {
            stop_shop_overwrite = false;
            should_shop_overwrite = true;
        }

        csharp_bridge::update_shop_data();
        next::ShopkeeperScreen::Show(this_ptr);
    }

    float angle = 0.0f;
    float stop_overwrite_time = 4.0f;
    IL2CPP_INTERCEPT(GameController, void, FixedUpdate, (app::GameController * this_ptr)) {
        next::GameController::FixedUpdate(this_ptr);
        if (stop_shop_overwrite) {
            stop_overwrite_time -= TimeUtility::get_fixedDeltaTime();
            if (stop_overwrite_time < 0.0f) {
                stop_shop_overwrite = false;
                should_shop_overwrite = false;
            }
        }
    }

    IL2CPP_INTERCEPT(ShopkeeperScreen, void, Hide, (app::ShopkeeperScreen * this_ptr, bool change)) {
        next::ShopkeeperScreen::Hide(this_ptr, change);
        stop_overwrite_time = 1.0f;
        stop_shop_overwrite = true;
    }

    app::ShopkeeperItem* selected_item;
    IL2CPP_INTERCEPT(ShopkeeperScreen, void, UpdateContextCanvasShards, (app::ShopkeeperScreen * this_ptr)) {
        selected_item = ShopkeeperScreen::get_SelectedUpgradeItem(this_ptr);
        next::ShopkeeperScreen::UpdateContextCanvasShards(this_ptr);
    }

    bool locked_shop_overwrite = false;
    IL2CPP_INTERCEPT(ShopkeeperUIDetails, void, ShowEmptyDetails, (app::ShopkeeperUIDetails * this_ptr)) {
        if (should_shop_overwrite && selected_item != nullptr) {
            locked_shop_overwrite = true;
            ShopkeeperUIDetails::UpdateDetails(this_ptr);
            locked_shop_overwrite = false;
        } else
            next::ShopkeeperUIDetails::ShowEmptyDetails(this_ptr);
    }
    // ---------------------------------------------------

    IL2CPP_INTERCEPT(ShopkeeperUIDetails, void, UpdateDetails2, (app::ShopkeeperUIDetails * this_ptr)) {
        // TODO: Fix details panel on ophers shop.
        next::ShopkeeperUIDetails::UpdateDetails2(this_ptr);
    }

    IL2CPP_INTERCEPT(ShopkeeperUIDetails, void, UpdateDetails, (app::ShopkeeperUIDetails * this_ptr)) {
        if (this_ptr->fields.m_item == nullptr)
            return;

        app::MessageProvider* name_provider = nullptr;
        app::MessageProvider* description_provider = nullptr;

        auto open_shop = shops::get_open_shop();
        shops::set_providers(open_shop, this_ptr->fields.m_item, name_provider, description_provider);

        auto renderer_components = il2cpp::unity::get_components<app::Renderer>(this_ptr->fields.IconGO, "UnityEngine", "Renderer");
        auto* const renderer = renderer_components[0];

        auto message_box_components = il2cpp::unity::get_components<app::MessageBox>(this_ptr->fields.NameGO, "", "MessageBox");
        auto* const name_box = message_box_components[0];

        message_box_components = il2cpp::unity::get_components<app::MessageBox>(this_ptr->fields.DescriptionGO, "", "MessageBox");
        auto* const description_box = message_box_components[0];

        const auto is_visible = il2cpp::invoke<app::Boolean__Boxed>(this_ptr->fields.m_item, "get_IsVisible")->fields;
        const auto is_locked = il2cpp::invoke<app::Boolean__Boxed>(this_ptr->fields.m_item, "get_IsLocked")->fields;

        if (name_provider != nullptr)
            name_box->fields.MessageProvider = name_provider;
        else if (!is_visible)
            name_box->fields.MessageProvider = text_database::get_provider(*static_text_entry::Undiscovered);
        else if (is_locked || locked_shop_overwrite)
            name_box->fields.MessageProvider = this_ptr->fields.LockedName;
        else
            name_box->fields.MessageProvider = il2cpp::invoke<app::MessageProvider>(this_ptr->fields.m_item, "get_ItemName");

        if (description_provider != nullptr)
            description_box->fields.MessageProvider = description_provider;
        else if (!is_visible)
            description_box->fields.MessageProvider = text_database::get_provider(*static_text_entry::UndiscoveredDescription);
        else if (is_locked || locked_shop_overwrite)
            description_box->fields.MessageProvider = this_ptr->fields.LockedDescription;
        else
            description_box->fields.MessageProvider = il2cpp::invoke<app::MessageProvider>(this_ptr->fields.m_item, "get_ItemDescription");

        auto* const empty_str = il2cpp::string_new("");
        MessageBox::RefreshText_2(name_box, empty_str, empty_str);
        MessageBox::RefreshText_2(description_box, empty_str, empty_str);

        // Need to do this as UpdateDetails2 overwrites the messageprovider.
        auto* const temp = this_ptr->fields.LockedDescription;
        if (is_locked || locked_shop_overwrite)
            this_ptr->fields.LockedDescription = description_box->fields.MessageProvider;

        ShopkeeperUIDetails::UpdateDetails2(this_ptr);
        description_box->fields.MessageProvider = temp;

        if (this_ptr->fields.ShowEquipStatus)
            SpellUIShardEquipStatus::SetEquipment(this_ptr->fields.m_equipStatus, app::EquipmentType__Enum::None);
    }

    bool should_special_handle_shop() {
#if GROM_ENABLED == 1
        return shops::is_in_shop(shops::ShopType::Opher) || shops::is_in_shop(shops::ShopType::Grom);
#else
        return shops::is_in_shop(shops::ShopType::Opher);
#endif
    }

    IL2CPP_INTERCEPT(ShopkeeperUISubItem, void, UpdateItem, (app::ShopkeeperUISubItem * this_ptr)) {
        if (should_special_handle_shop()) {
            const auto is_visible = il2cpp::invoke<app::Boolean__Boxed>(this_ptr->fields.m_item, "get_IsVisible")->fields;
            const auto is_owned = il2cpp::invoke<app::Boolean__Boxed>(this_ptr->fields.m_item, "get_IsOwned")->fields;
            const auto is_affordable = il2cpp::invoke<app::Boolean__Boxed>(this_ptr->fields.m_item, "get_IsAffordable")->fields;
            const auto is_locked = il2cpp::invoke<app::Boolean__Boxed>(this_ptr->fields.m_item, "get_IsLocked")->fields;
            const auto is_max_level = il2cpp::invoke<app::Boolean__Boxed>(this_ptr->fields.m_item, "get_IsMaxLevel")->fields;

            auto menu_item = il2cpp::unity::get_component<app::CleverMenuItem>(this_ptr, "", "CleverMenuItem");
            auto renderer = il2cpp::unity::get_component<app::Renderer>(this_ptr->fields.IconGO, "UnityEngine", "Renderer");
            auto texture_data = shops::get_icon(get_open_shop(), this_ptr->fields.m_item);
            texture_data->apply(renderer);
            if (this_ptr->fields.m_item == nullptr) {
                CleverMenuItem::set_IsDisabled(menu_item, true);
                return;
            }

            if (!is_visible || is_max_level) {
                if (il2cpp::unity::is_valid(this_ptr->fields.SpiritLightGO))
                    GameObject::SetActive(this_ptr->fields.SpiritLightGO, false);

                if (il2cpp::unity::is_valid(this_ptr->fields.OreGO))
                    GameObject::SetActive(this_ptr->fields.OreGO, false);
            }

            auto value = il2cpp::invoke<app::Int32__Boxed>(this_ptr->fields.m_item, "get_ItemCurrentLevel")->fields;
            auto max_level = il2cpp::invoke<app::Int32__Boxed>(this_ptr->fields.m_item, "get_ItemMaxLevel")->fields;
            if (max_level < value)
                value = max_level;

            if (il2cpp::unity::is_valid(this_ptr->fields.Backdrop))
                SpiritShardUIShardBackdrop::SetUpgradeCount(this_ptr->fields.Backdrop, 0, 0);
            // SpiritShardUIShardBackdrop::SetUpgradeCount(this_ptr->fields.Backdrop, value, max_level);

            auto cost = il2cpp::invoke<app::Int32__Boxed>(this_ptr->fields.m_item, "GetCostForLevel", &value)->fields;
            if (cost == 0) {
                if (il2cpp::unity::is_valid(this_ptr->fields.SpiritLightGO))
                    GameObject::SetActive(this_ptr->fields.SpiritLightGO, false);

                if (il2cpp::unity::is_valid(this_ptr->fields.OreGO))
                    GameObject::SetActive(this_ptr->fields.OreGO, false);
            } else {
                if (il2cpp::unity::is_valid(this_ptr->fields.SpiritLightGO))
                    GameObject::SetActive(this_ptr->fields.SpiritLightGO, !this_ptr->fields.ShowOre);

                if (il2cpp::unity::is_valid(this_ptr->fields.OreGO))
                    GameObject::SetActive(this_ptr->fields.OreGO, this_ptr->fields.ShowOre);
            }

            if (il2cpp::unity::is_valid(this_ptr->fields.CostGO) && GameObject::get_activeSelf(this_ptr->fields.CostGO)) {
                auto text = il2cpp::string_new(std::to_string(cost));
                auto text_box = il2cpp::unity::get_component<app::TextBox>(this_ptr->fields.CostGO, "CatlikeCoding.TextBox", "TextBox");
                TextBox::SetText_2(text_box, text);
                TextBox::RenderText(text_box);
            }

            CleverMenuItem::set_IsDisabled(menu_item, is_owned || is_max_level || !is_affordable);
        } else
            next::ShopkeeperUISubItem::UpdateItem(this_ptr);
    }

    IL2CPP_INTERCEPT(ShopkeeperUIItem, void, UpdateItem, (app::ShopkeeperUIItem * this_ptr, app::ShopkeeperItem* item)) {
        if (should_special_handle_shop()) {
            const auto is_visible = il2cpp::invoke<app::Boolean__Boxed>(item, "get_IsVisible")->fields;
            const auto is_owned = il2cpp::invoke<app::Boolean__Boxed>(item, "get_IsOwned")->fields;
            const auto is_affordable = il2cpp::invoke<app::Boolean__Boxed>(item, "get_IsAffordable")->fields;
            const auto is_locked = il2cpp::invoke<app::Boolean__Boxed>(item, "get_IsLocked")->fields;
            const auto is_max_level = il2cpp::invoke<app::Boolean__Boxed>(item, "get_IsMaxLevel")->fields;

            auto available = !is_locked && !is_max_level;
            GameObject::SetActive(this_ptr->fields.LockedGO, !is_visible);
            GameObject::SetActive(this_ptr->fields.AlreadyOwnedGO, is_visible && is_owned); // !(available && is_affordable) || (!is_locked && is_max_level));
            GameObject::SetActive(this_ptr->fields.AvailableToBuyGO, is_visible && available && is_affordable);
            GameObject::SetActive(this_ptr->fields.TooExpensiveGO, is_visible && !is_max_level && (!is_affordable || is_locked));

            auto ui_sub_item = il2cpp::unity::get_component<app::ShopkeeperUISubItem>(this_ptr->fields.LockedGO, "", "ShopkeeperUISubItem");
            ui_sub_item->fields.m_item = item;
            ShopkeeperUISubItem::UpdateItem(ui_sub_item);

            ui_sub_item = il2cpp::unity::get_component<app::ShopkeeperUISubItem>(this_ptr->fields.AlreadyOwnedGO, "", "ShopkeeperUISubItem");
            ui_sub_item->fields.m_item = item;
            ShopkeeperUISubItem::UpdateItem(ui_sub_item);

            ui_sub_item = il2cpp::unity::get_component<app::ShopkeeperUISubItem>(this_ptr->fields.AvailableToBuyGO, "", "ShopkeeperUISubItem");
            ui_sub_item->fields.m_item = item;
            ShopkeeperUISubItem::UpdateItem(ui_sub_item);

            ui_sub_item = il2cpp::unity::get_component<app::ShopkeeperUISubItem>(this_ptr->fields.TooExpensiveGO, "", "ShopkeeperUISubItem");
            ui_sub_item->fields.m_item = item;
            ShopkeeperUISubItem::UpdateItem(ui_sub_item);
        } else
            next::ShopkeeperUIItem::UpdateItem(this_ptr, item);
    }

    void handle_quick_buy(Action action, bool pressed) {
        quick_buy = pressed;
    }

    void initialize() {
        randomizer::input::add_on_pressed_callback(Action::QuickBuy, handle_quick_buy);
        randomizer::input::add_on_released_callback(Action::QuickBuy, handle_quick_buy);
    }

    CALL_ON_INIT(initialize);
} // namespace

namespace shops {
    bool is_in_shop(ShopType type) {
        const auto gameController = game::controller();
        if (!gameController || GameController::get_GameInTitleScreen(gameController))
            return false;

        switch (type) {
            case ShopType::Lupo: {
                auto* const mapmaker_screen_class = il2cpp::get_class<app::MapmakerScreen__Class>("", "MapmakerScreen");
                auto* const mapmaker_screen = mapmaker_screen_class->static_fields->Instance;
                return mapmaker_screen && PurchaseThingScreen::get_IsShopOpen(reinterpret_cast<app::PurchaseThingScreen*>(mapmaker_screen));
            }
            case ShopType::Grom: {
#if GROM_ENABLED == 1
                auto* const builder_screen_class = il2cpp::get_class<app::BuilderScreen__Class>("", "BuilderScreen");
                auto* const builder_screen = builder_screen_class->static_fields->_Instance_k__BackingField;
                return builder_screen && PurchaseThingScreen::get_IsShopOpen(reinterpret_cast<app::PurchaseThingScreen*>(builder_screen));
#else
                return false;
#endif
            }
            case ShopType::Opher: {
                const auto weaponmasterScreen = il2cpp::get_class<app::WeaponmasterScreen__Class>("", "WeaponmasterScreen")->static_fields->_Instance_k__BackingField;
                return weaponmasterScreen && PurchaseThingScreen::get_IsShopOpen(reinterpret_cast<app::PurchaseThingScreen*>(weaponmasterScreen));
            }
            case ShopType::Twillen: {
                auto* const shop_screen = il2cpp::get_class<app::SpiritShardsShopScreen__Class>("", "SpiritShardsShopScreen");
                const auto spiritShardsShopScreen = shop_screen->static_fields->Instance;
                return spiritShardsShopScreen && PurchaseThingScreen::get_IsShopOpen(reinterpret_cast<app::PurchaseThingScreen*>(spiritShardsShopScreen));
            }
            case ShopType::Tuley:
                return false;
            default:
                return false;
        }
    };

    ShopType get_open_shop() {
        for (auto i = 1; i < static_cast<int>(ShopType::TOTAL); ++i) {
            auto type = static_cast<ShopType>(i);
            if (is_in_shop(type))
                return type;
        }

        return ShopType::None;
    }

    void set_providers(ShopType type, app::ShopkeeperItem* item, app::MessageProvider*& name_provider, app::MessageProvider*& description_provider) {
        switch (type) {
            case ShopType::Opher: {
                set_opher_providers(reinterpret_cast<app::WeaponmasterItem*>(item), name_provider, description_provider);
                break;
            }
            case ShopType::Grom: {
#if GROM_ENABLED == 1
                set_grom_providers(reinterpret_cast<app::BuilderItem*>(item), name_provider, description_provider);
#endif
                break;
            }
            default:
                break;
        }
    }

    std::shared_ptr<randomizer::textures::TextureData> default_texture;
    std::shared_ptr<randomizer::textures::TextureData> get_icon(ShopType type, void* shop_item) {
        std::shared_ptr<randomizer::textures::TextureData> output;
        if (shop_item != nullptr) {
            switch (type) {
                case ShopType::Opher:
                    output = get_opher_icon(reinterpret_cast<app::WeaponmasterItem*>(shop_item));
                    break;
                case ShopType::Twillen:
                    output = get_twillen_icon(reinterpret_cast<app::UpgradableShardItem*>(shop_item));
                    break;
                case ShopType::Lupo:
                    output = get_lupo_icon(reinterpret_cast<app::MapmakerItem*>(shop_item));
                    break;
                default:
                    break;
            }
        }

        if (output != nullptr)
            return output;

        if (default_texture == nullptr) {
            default_texture = randomizer::textures::create_texture();
            auto shard_icons = il2cpp::get_class<app::SpiritShardSettings__Class>("", "SpiritShardSettings")
                                       ->static_fields->Instance->fields.Icons;
            auto icon = 0;
            auto icons = il2cpp::invoke<app::SpiritShardIconsCollection_Icons__Boxed>(shard_icons, "GetValue", &icon);
            default_texture->set_texture(reinterpret_cast<app::Texture*>(icons->fields.InventoryIcon));
        }

        return default_texture;
    }

    void set_item(ShopItem& item, const wchar_t* name, const wchar_t* description, const wchar_t* texture, bool uses_energy, bool is_locked, bool is_visible) {
        if (item.name != 0)
            il2cpp::gchandle_free(item.name);
        if (item.description != 0)
            il2cpp::gchandle_free(item.description);

        // TODO: Move below to text_database
        auto* provider = utils::create_message_provider(name);
        item.name = il2cpp::gchandle_new(provider, false);
        provider = utils::create_message_provider(description);
        item.description = il2cpp::gchandle_new(provider, false);
        if (texture == nullptr)
            item.texture_data = nullptr;
        else if (item.texture_data == nullptr || item.texture_data->get_path() != texture)
            item.texture_data = randomizer::textures::get_texture(texture);

        item.uses_energy = uses_energy;
        item.is_locked = is_locked;
        item.is_visible = is_visible;
    }
} // namespace shops
