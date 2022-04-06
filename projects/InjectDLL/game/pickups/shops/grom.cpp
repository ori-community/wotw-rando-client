#include <Common/ext.h>
#include <game/system/message_provider.h>
#include <interop/csharp_bridge.h>
#include <game/pickups/shops/general.h>
#include <randomizer/render/textures.h>
#include <randomizer/text_database.h>
#include <uber_states/uber_state_helper.h>
#include <uber_states/uber_state_manager.h>

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>

#include <functional>
#include <set>
#include <map>

using namespace modloader;

namespace
{
    IL2CPP_BINDING(, SeinCharacter, bool, get_Active, (app::SeinCharacter*));

    using grom_key = int;
    std::unordered_map<grom_key, shops::ShopItem> grom_overrides;

    grom_key get_key(app::NpcProjectItem* item)
    {
        const auto state_id = item->fields.UberState->fields._.m_id->fields.m_id;
        return state_id;
        //const auto group_id = item->fields.UberState->fields.Group->fields._.m_id->fields.m_id;
        //return std::make_pair(state_id, group_id);
    }

#define GROM_ENABLED 0
#if GROM_ENABLED == 1
    IL2CPP_INTERCEPT(, BuilderItem, int, GetCostForLevel, (app::BuilderItem* this_ptr, int level)) {
        auto id = this_ptr->fields.Project->fields.UberState->fields._.m_id->fields.m_id;
        return static_cast<int>(uber_states::get_uber_state_value(uber_states::constants::GROM_SHOP_GROUP_ID, 100000 + id));
    }

    IL2CPP_INTERCEPT(, BuilderItem, bool, get_IsVisible, (app::BuilderItem* this_ptr)) {
        GUARD(,,BuilderItem, get_IsVisible);
        auto key = get_key(this_ptr->fields.Project);
        const auto it = grom_overrides.find(key);
        if (it != grom_overrides.end())
            return it->second.is_visible;

        return false;
    }

    IL2CPP_INTERCEPT(, BuilderItem, bool, get_IsLocked, (app::BuilderItem* this_ptr)) {
        GUARD(, , BuilderItem, get_IsLocked);
        auto key = get_key(this_ptr->fields.Project);
        const auto it = grom_overrides.find(key);
        if (it != grom_overrides.end())
            return it->second.is_locked;

        return true;
    }

    IL2CPP_INTERCEPT(, BuilderItem, bool, get_IsAffordable, (app::BuilderItem* this_ptr)) {
        GUARD(, , BuilderItem, get_IsAffordable);
        return get_ore() >= BuilderItem::GetCostForLevel_intercept(this_ptr, 1);
    }

    IL2CPP_INTERCEPT(, BuilderItem, bool, get_IsOwned, (app::BuilderItem* this_ptr)) {
        GUARD(, , BuilderItem, get_IsOwned);
        auto id = this_ptr->fields.Project->fields.UberState->fields._.m_id->fields.m_id;
        return uber_states::get_uber_state_value(uber_states::constants::GROM_SHOP_GROUP_ID, id) > 0.5;
    }

    //IL2CPP_INTERCEPT(, BuilderItem, bool, get_IsMaxLevel, (app::BuilderItem* item)) {
    //    return false;
    //}
    //
    //IL2CPP_INTERCEPT(, BuilderItem, bool, get_IsUpgradable, (app::BuilderItem* item)) {
    //    return false;
    //}
    //
    //IL2CPP_INTERCEPT(, BuilderItem, bool, get_UsesEnergy, (app::BuilderItem* item)) {
    //    return false;
    //}

    IL2CPP_BINDING(, UISoundSettingsAsset, void, PlaySoundEvent, (app::UISoundSettingsAsset* this_ptr, app::Event_1* evt));
    bool show_hint(void* show_hint_action, app::UISoundSettingsAsset* sounds, app::MessageProvider* provider)
    {
        il2cpp::invoke(show_hint_action, "Invoke", provider);
        if (sounds != nullptr)
            UISoundSettingsAsset::PlaySoundEvent(sounds, sounds->fields.InvalidItem);

        return false;
    }

    IL2CPP_INTERCEPT(, BuilderItem, bool, TryPurchase, (app::BuilderItem* this_ptr, void* show_hint_action, app::UISoundSettingsAsset* sounds, app::ShopKeeperHints* hints)) {

        auto key = get_key(this_ptr->fields.Project);
        const auto it = grom_overrides.find(key);
        if (it == grom_overrides.end() || !it->second.is_visible)
            return show_hint(show_hint_action, sounds, hints->fields.ShardNotDiscovered);

        if (it != grom_overrides.end() && it->second.is_locked)
            return show_hint(show_hint_action, sounds, hints->fields.IsLocked);

        if (BuilderItem::get_IsOwned_intercept(this_ptr))
            return show_hint(show_hint_action, sounds, hints->fields.MaxedOut);

        if (BuilderItem::GetCostForLevel_intercept(this_ptr, 1) > get_ore())
            return show_hint(show_hint_action, sounds, hints->fields.NotEnoughOre);

        return true;
    }

    IL2CPP_BINDING(, ShopkeeperScreen, void, CompletePurchase, (app::ShopkeeperScreen* this_ptr));
    IL2CPP_INTERCEPT(, BuilderScreen, void, CompletePurchase, (app::BuilderScreen* this_ptr)) {
        // May want to call ShopkeeperScreen::CompletePurchase instead to prevent PurchasedProject being set on BuilderEntity.
        // ShopkeeperScreen::CompletePurchase(reinterpret_cast<app::ShopkeeperScreen*>(this_ptr));
        BuilderScreen::CompletePurchase(this_ptr);
    }
#endif
}

namespace shops
{
    void set_grom_providers(app::BuilderItem* item, app::MessageProvider*& name_provider, app::MessageProvider*& description_provider)
    {
        const auto key = get_key(item->fields.Project);
        const auto it = grom_overrides.find(key);
        if (it != grom_overrides.end())
        {
            name_provider = reinterpret_cast<app::MessageProvider*>(il2cpp::gchandle_target(it->second.name));
            description_provider = reinterpret_cast<app::MessageProvider*>(il2cpp::gchandle_target(it->second.description));
        }
    }

    std::shared_ptr<randomizer::textures::TextureData> get_grom_icon(app::NpcProjectItem* shop_item)
    {
        const auto key = get_key(shop_item);
        const auto it = grom_overrides.find(key);
        if (it != grom_overrides.end() && it->second.texture_data != nullptr)
            return it->second.texture_data;

        return nullptr;
    }
}

INJECT_C_DLLEXPORT void set_grom_item(int state, const wchar_t* name, const wchar_t* description, const wchar_t* texture, bool is_locked, bool is_visible) {
    set_item(grom_overrides[state], name, description, texture, false, is_locked, is_visible);
}

//BuilderScreen
