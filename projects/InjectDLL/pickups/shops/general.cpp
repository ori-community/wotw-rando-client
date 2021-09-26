#include <csharp_bridge.h>
#include <dll_main.h>
#include <Common/ext.h>
#include <pickups/shops/general.h>
#include <uber_states/uber_state_manager.h>
#include <utils/messaging.h>
#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>

using namespace modloader;
using namespace shops;

namespace
{
    IL2CPP_BINDING(, PurchaseThingScreen, bool, get_IsShopOpen, (app::PurchaseThingScreen*));
    IL2CPP_BINDING(, GameController, bool, get_GameInTitleScreen, (app::GameController*));
    IL2CPP_INTERCEPT(, SpellUIExperience, bool, Spend, (app::SpellUIExperience* this_ptr, int amount)) {
        bool worked = SpellUIExperience::Spend(this_ptr, amount);
        if (worked)
            uber_states::set_uber_state_value(6, 4, amount + uber_states::get_uber_state_value(6, 4));
        return worked;
    };

    constexpr float NORMAL_PURCHASE_TIME = 0.4f;
    constexpr float FAST_PURCHASE_TIME = 0.01f;

    IL2CPP_INTERCEPT(, PurchaseThingScreen, void, PurchaseInput, (app::PurchaseThingScreen* this_ptr))
    {
        this_ptr->fields.PurchaseCooldown = 0.1f;
        this_ptr->fields.PurchaseTime = NORMAL_PURCHASE_TIME;
        auto* const input_cmd = il2cpp::get_nested_class<app::Input_Cmd__Class>("Core", "Input", "Cmd");
        if (input_cmd->static_fields->DialogueOption1 != nullptr &&
            input_cmd->static_fields->DialogueOption1->fields.IsPressed)
        {
            this_ptr->fields.PurchaseTime = FAST_PURCHASE_TIME;
        }

        PurchaseThingScreen::PurchaseInput(this_ptr);
    }
    // Generic --------------------------------

    IL2CPP_BINDING(UnityEngine, GameObject, void, SetActive, (app::GameObject* this_ptr, bool value));
    NESTED_IL2CPP_BINDING(Moon.uberSerializationWisp, PlayerUberStateShards, Shard, bool, get_Upgradable, (app::PlayerUberStateShards_Shard* this_ptr));
    NESTED_IL2CPP_BINDING(Moon.uberSerializationWisp, PlayerUberStateShards, Shard, bool, get_UpgradeAffordable, (app::PlayerUberStateShards_Shard* this_ptr));
    IL2CPP_BINDING(, SpellUIShardEquipStatus, void, SetEquipment, (app::SpellUIShardEquipStatus* this_ptr, app::EquipmentType__Enum type));

    // All of this code is horrendous.
    // ---------------------------------------------------
    bool stop_shop_overwrite = false;
    bool should_shop_overwrite = false;
    IL2CPP_INTERCEPT(, ShopkeeperScreen, void, Show, (app::ShopkeeperScreen* this_ptr)) {
        if (il2cpp::is_assignable(this_ptr, "", "WeaponmasterScreen"))
        {
            stop_shop_overwrite = false;
            should_shop_overwrite = true;
        }

        csharp_bridge::update_shop_data();
        ShopkeeperScreen::Show(this_ptr);
    }

    float stop_overwrite_time = 4.0f;
    STATIC_IL2CPP_BINDING(, TimeUtility, float, get_fixedDeltaTime, ());
    IL2CPP_INTERCEPT(, GameController, void, FixedUpdate, (app::GameController* this_ptr)) {
        GameController::FixedUpdate(this_ptr);
        if (stop_shop_overwrite)
        {
            stop_overwrite_time -= TimeUtility::get_fixedDeltaTime();
            if (stop_overwrite_time < 0.0f)
            {
                stop_shop_overwrite = false;
                should_shop_overwrite = false;
            }
        }
    }

    IL2CPP_INTERCEPT(, ShopkeeperScreen, void, Hide, (app::ShopkeeperScreen* this_ptr, bool change)) {
        ShopkeeperScreen::Hide(this_ptr, change);
        stop_overwrite_time = 1.0f;
        stop_shop_overwrite = true;
    }

    app::ShopkeeperItem* selected_item;
    IL2CPP_BINDING(, ShopkeeperScreen, app::ShopkeeperItem*, get_SelectedUpgradeItem, (app::ShopkeeperScreen* this_ptr));
    IL2CPP_INTERCEPT(, ShopkeeperScreen, void, UpdateContextCanvasShards, (app::ShopkeeperScreen* this_ptr)) {
        selected_item = get_SelectedUpgradeItem(this_ptr);
        UpdateContextCanvasShards(this_ptr);
    }
    
    bool locked_shop_overwrite = false;
    DECLARE_INTERCEPT(, ShopkeeperUIDetails, void, UpdateDetails, (app::ShopkeeperUIDetails* this_ptr));
    IL2CPP_INTERCEPT(, ShopkeeperUIDetails, void, ShowEmptyDetails, (app::ShopkeeperUIDetails* this_ptr))
    {
        if (should_shop_overwrite && selected_item != nullptr)
        {
            locked_shop_overwrite = true;
            UpdateDetails_intercept(this_ptr);
            locked_shop_overwrite = false;
        }
        else
            ShowEmptyDetails(this_ptr);
    }
    // ---------------------------------------------------

    IL2CPP_BINDING(, MessageBox, void, RefreshText, (app::MessageBox* this_ptr, app::String* replace, app::String* with));
    IL2CPP_BINDING(, ShopkeeperUIDetails, void, UpdateDetails2, (app::ShopkeeperUIDetails* this_ptr));
    IL2CPP_INTERCEPT(, ShopkeeperUIDetails, void, UpdateDetails, (app::ShopkeeperUIDetails* this_ptr))
    {
        if (this_ptr->fields.m_item == nullptr)
            return;

        app::MessageProvider* name_provider = nullptr;
        app::MessageProvider* description_provider = nullptr;
        app::MessageProvider* locked_provider = nullptr;

        auto open_shop = shops::get_open_shop();
        shops::set_providers(open_shop, this_ptr->fields.m_item, name_provider, description_provider, locked_provider);

        auto renderer_components = il2cpp::unity::get_components<app::Renderer>(this_ptr->fields.IconGO, "UnityEngine", "Renderer");
        auto* const renderer = renderer_components[0];

        auto texture = shops::get_icon(open_shop, this_ptr->fields.m_item);
        textures::apply(renderer, texture);
        if (open_shop == shops::ShopType::Opher)
            GameObject::SetActive(this_ptr->fields.IconGO, true);

        auto message_box_components = il2cpp::unity::get_components<app::MessageBox>(this_ptr->fields.NameGO, "", "MessageBox");
        auto* const name_box = message_box_components[0];

        message_box_components = il2cpp::unity::get_components<app::MessageBox>(this_ptr->fields.DescriptionGO, "", "MessageBox");
        auto* const description_box = message_box_components[0];

        const auto locked = il2cpp::invoke<app::Boolean__Boxed>(this_ptr->fields.m_item, "get_IsLocked")->fields;
        auto* const empty_str = il2cpp::string_new("");

        if (locked || locked_shop_overwrite)
        {
            name_box->fields.MessageProvider = this_ptr->fields.LockedName;
            description_box->fields.MessageProvider = locked_provider == nullptr ? this_ptr->fields.LockedDescription : locked_provider;
        }
        else
        {
            name_box->fields.MessageProvider = name_provider == nullptr ? il2cpp::invoke<app::MessageProvider>(this_ptr->fields.m_item, "get_ItemName") : name_provider;
            description_box->fields.MessageProvider = description_provider == nullptr ? il2cpp::invoke<app::MessageProvider>(this_ptr->fields.m_item, "get_ItemDescription") : description_provider;
        }

        MessageBox::RefreshText(name_box, empty_str, empty_str);
        MessageBox::RefreshText(description_box, empty_str, empty_str);

        // Need to do this as UpdateDetails2 overwrites the messageprovider.
        auto* const temp = this_ptr->fields.LockedDescription;
        if (locked || locked_shop_overwrite)
            this_ptr->fields.LockedDescription = description_box->fields.MessageProvider;

        UpdateDetails2(this_ptr);
        description_box->fields.MessageProvider = temp;

        if (this_ptr->fields.ShowEquipStatus != false)
            SpellUIShardEquipStatus::SetEquipment(this_ptr->fields.m_equipStatus, app::EquipmentType__Enum_None);
    }
}

namespace shops
{
    bool is_in_shop(ShopType type)
    {
        const auto gameController = get_game_controller();
        if (!gameController || GameController::get_GameInTitleScreen(gameController))
            return false;

        switch (type)
        {
        case ShopType::Lupo:
        {
            auto* const mapmaker_screen_class = il2cpp::get_class<app::MapmakerScreen__Class>("", "MapmakerScreen");
            auto* const mapmaker_screen = mapmaker_screen_class->static_fields->Instance;
            return mapmaker_screen && PurchaseThingScreen::get_IsShopOpen(reinterpret_cast<app::PurchaseThingScreen*>(mapmaker_screen));
        }
        case ShopType::Grom:
            return false;
        case ShopType::Opher:
        {
            const auto weaponmasterScreen = il2cpp::get_class<app::WeaponmasterScreen__Class>("", "WeaponmasterScreen")->static_fields->_Instance_k__BackingField;
            return weaponmasterScreen && PurchaseThingScreen::get_IsShopOpen(reinterpret_cast<app::PurchaseThingScreen*>(weaponmasterScreen));
        }
        case ShopType::Twillen:
        {
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

    ShopType get_open_shop()
    {
        for (auto i = 1; i < static_cast<int>(ShopType::TOTAL); ++i)
        {
            auto type = static_cast<ShopType>(i);
            if (is_in_shop(type))
                return type;
        }

        return ShopType::None;
    }

    void set_providers(ShopType type, app::ShopkeeperItem* shop_item, app::MessageProvider*& name_provider, app::MessageProvider*& description_provider, app::MessageProvider*& locked_provider)
    {
        switch (type)
        {
        case ShopType::Opher:
        {
            set_opher_providers(shop_item, name_provider, description_provider, locked_provider);
            break;
        }
        default:
            break;
        }
    }

    textures::TextureData get_icon(ShopType type, app::ShopkeeperItem* shop_item)
    {
        textures::TextureData data;
        switch (type)
        {
        case ShopType::Opher:
        {
            data = get_opher_icon(shop_item);
            break;
        }
        default:
            textures::TextureData data;
            data.texture = il2cpp::invoke<app::Texture>(shop_item, "get_ItemIcon");
            break;
        }

        if (data.texture == nullptr)
        {
            auto shard_icons = il2cpp::get_class<app::SpiritShardSettings__Class>("", "SpiritShardSettings")
                ->static_fields->Instance->fields.Icons;
            auto icon = 0;
            auto icons = il2cpp::invoke<app::SpiritShardIconsCollection_Icons__Boxed>(shard_icons, "GetValue", &icon);
            data.texture = reinterpret_cast<app::Texture*>(icons->fields.InventoryIcon);
        }

        return data;
    }

    void set_item(ShopItem& item, const wchar_t* name, const wchar_t* description, const wchar_t* texture, const wchar_t* locked, bool uses_energy)
    {
        if (item.name != 0)
            il2cpp::gchandle_free(item.name);
        if (item.description != 0)
            il2cpp::gchandle_free(item.description);
        if (item.locked != 0)
            il2cpp::gchandle_free(item.locked);

        auto* provider = utils::create_message_provider(il2cpp::string_new(name));
        item.name = il2cpp::gchandle_new(provider, false);
        provider = utils::create_message_provider(il2cpp::string_new(description));
        item.description = il2cpp::gchandle_new(provider, false);
        provider = utils::create_message_provider(il2cpp::string_new(locked));
        item.texture = textures::get_texture(texture);
        item.locked = il2cpp::gchandle_new(provider, false);
        item.uses_energy = uses_energy;
    }
}
