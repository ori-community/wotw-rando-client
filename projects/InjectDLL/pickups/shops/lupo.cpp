#include <Common/ext.h>
#include <csharp_bridge.h>
#include <pickups/shops/general.h>
#include <uber_states/uber_state_helper.h>
#include <uber_states/uber_state_manager.h>
#include <utils/messaging.h>

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>

#include <unordered_map>

using namespace modloader;

namespace
{
    IL2CPP_INTERCEPT(, MapmakerItem, int32_t, GetCost, (app::MapmakerItem* this_ptr))
    {
        return csharp_bridge::lupo_upgrade_cost(this_ptr->fields.UberState->fields._.m_id->fields.m_id);
    }

    bool prevent_map_safeguard = false;

    IL2CPP_INTERCEPT(, MapmakerScreen, void, Show, (app::MapmakerScreen* this_ptr))
    {
        prevent_map_safeguard = true;
        csharp_bridge::update_shop_data();
        MapmakerScreen::Show(this_ptr);
        prevent_map_safeguard = false;
    }

    IL2CPP_INTERCEPT(Moon, SerializedBooleanUberState, bool, get_Value, (app::SerializedBooleanUberState* this_ptr))
    {
        if (prevent_map_safeguard && this_ptr->fields._.m_id->fields.m_id == 35534)
            return false;

        return SerializedBooleanUberState::get_Value(this_ptr);
    }

    std::unordered_map<uint64_t, shops::ShopItem> lupo_overrides;

    IL2CPP_INTERCEPT(, MapmakerUISubItem, void, UpdateUpgradeIcon, (app::MapmakerUISubItem* this_ptr)) {
        auto renderer = il2cpp::unity::get_component<app::Renderer>(this_ptr->fields.IconGO, "UnityEngine", "Renderer");
        auto texture = shops::get_icon(shops::ShopType::Lupo, this_ptr->fields.m_upgradeItem);
        if (texture != nullptr)
            texture->apply(renderer);
        else
        {
            textures::apply_default(renderer);
            shaders::UberShaderAPI::SetTexture(renderer, app::UberShaderProperty_Texture__Enum_MainTexture,
                reinterpret_cast<app::Texture*>(this_ptr->fields.m_upgradeItem->fields.Icon));
        }
    }

    IL2CPP_BINDING(UnityEngine, GameObject, void, SetActive, (app::GameObject* this_ptr, bool value));
    IL2CPP_BINDING(UnityEngine, GameObject, bool, get_activeSelf, (app::GameObject* this_ptr));
    IL2CPP_BINDING(, CleverMenuItem, void, set_IsDisabled, (app::CleverMenuItem* this_ptr, bool disabled));
    IL2CPP_BINDING(CatlikeCoding.TextBox, TextBox, void, RenderText, (app::TextBox* this_ptr));
    IL2CPP_BINDING_OVERLOAD(CatlikeCoding.TextBox, TextBox, void, SetText, (app::TextBox* this_ptr, app::String* text), (System:String));
    IL2CPP_INTERCEPT(, MapmakerUISubItem, void, UpdateItem, (app::MapmakerUISubItem* this_ptr)) {
        MapmakerUISubItem::UpdateUpgradeIcon_intercept(this_ptr);

        auto state = this_ptr->fields.m_upgradeItem->fields.UberState;
        auto not_owned = this_ptr->fields.m_upgradeItem->fields.MaxLevel < state->fields.m_value;
        auto cost = MapmakerItem::GetCost_intercept(this_ptr->fields.m_upgradeItem);
        auto can_afford = get_experience() < cost;

        GameObject::SetActive(this_ptr->fields.CostGO, cost != 0);
        if (il2cpp::unity::is_valid(this_ptr->fields.SpiritLightGO))
            GameObject::SetActive(this_ptr->fields.SpiritLightGO, cost != 0);

        if (GameObject::get_activeSelf(this_ptr->fields.CostGO))
        {
            auto text_box = il2cpp::unity::get_component<app::TextBox>(this_ptr->fields.CostGO, "CatlikeCoding.TextBox", "TextBox");
            if (can_afford | not_owned)
                text_box->fields.color = this_ptr->fields.PurchasableColor;
            else
                text_box->fields.color = this_ptr->fields.UnpurchaseableColor;

            TextBox::SetText(text_box, il2cpp::string_new(std::to_string(cost)));
            TextBox::RenderText(text_box);
        }

        CleverMenuItem::set_IsDisabled(il2cpp::unity::get_component<app::CleverMenuItem>(this_ptr, "", "CleverMenuItem"), !not_owned && can_afford);
    }

    IL2CPP_INTERCEPT(, MapmakerUIItem, void, UpdateMapmakerItem, (app::MapmakerUIItem* this_ptr, app::MapmakerItem* item)) {
        const auto state_id = item->fields.UberState->fields._.m_id->fields.m_id;
        const auto group_id = item->fields.UberState->fields.Group->fields._.m_id->fields.m_id;
        const auto key = static_cast<uint64_t>(group_id & 0xFFFFFFFF) | (static_cast<uint64_t>(state_id & 0xFFFFFFFF) << 8);
        const auto it = lupo_overrides.find(key);
        if (it != lupo_overrides.end())
        {
            item->fields.Name = reinterpret_cast<app::MessageProvider*>(il2cpp::gchandle_target(it->second.name));
            item->fields.Description = reinterpret_cast<app::MessageProvider*>(il2cpp::gchandle_target(it->second.description));
        }

        MapmakerUIItem::UpdateMapmakerItem(this_ptr, item);
    }

    // Todo: Add this in so we see the correct icons in the mapmaker details.
    //IL2CPP_INTERCEPT(, MapmakerUIDetails, void, UpdateDetails, (app::MapmakerUIDetails* this_ptr)) {
    //    
    //}
}

namespace shops
{
    std::shared_ptr<textures::TextureData> get_lupo_icon(app::MapmakerItem* shop_item)
    {
        const auto state_id = shop_item->fields.UberState->fields._.m_id->fields.m_id;
        const auto group_id = shop_item->fields.UberState->fields.Group->fields._.m_id->fields.m_id;
        const auto key = static_cast<uint64_t>(group_id & 0xFFFFFFFF) | (static_cast<uint64_t>(state_id & 0xFFFFFFFF) << 8);
        const auto it = lupo_overrides.find(key);
        if (it != lupo_overrides.end() && it->second.texture_data != nullptr)
            return it->second.texture_data;

        return nullptr;
    }
}

INJECT_C_DLLEXPORT void set_lupo_item(int group_id, int state_id, const wchar_t* name, const wchar_t* description, const wchar_t* texture, const wchar_t* locked)
{
    const auto key = static_cast<uint64_t>(group_id & 0xFFFFFFFF) | (static_cast<uint64_t>(state_id & 0xFFFFFFFF) << 8);
    const auto it = lupo_overrides.find(key);
    auto& item = lupo_overrides[key];
    set_item(item, name, description, texture, locked, false);
}
