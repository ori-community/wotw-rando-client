#include <interception_macros.h>
#include <dll_main.h>
#include <il2cpp_helpers.h>
#include <Common/ext.h>
#include <features/messages.h>
#include <csharp_bridge.h>

#include <set>
#include <locale>
#include <codecvt>
#include <unordered_map>
#include <xstring>

#undef MessageBox

BINDING(30218144, app::Char__Array*, System_String__ToCharArray, (app::String* this_ptr))//System.String$$ToCharArray
BINDING(34816240, int, System_Array__get_Length, (app::Array* this_ptr)) //System.Array$$get_Length
BINDING(34805488, Il2CppObject*, System_Array__GetValue, (app::Array* thus_ptr, int index)) //System.Array$$GetValue

BINDING(13847344, app::MessageBoxA*, MessageControllerB__ShowHintSmallMessage, (app::MessageControllerB* this_ptr, app::MessageDescriptor descriptor, app::Vector3 position, float duration));
BINDING(13836768, bool, MessageBoxVisibility__get_Visible, (app::MessageBoxVisibility* this_ptr));
BINDING(13820848, void, MessageBox__HideMessageScreenImmediately, (app::MessageBoxA* this_ptr, int32_t action));
BINDING(13821184, void, MessageBox__HideMessageScreen, (app::MessageBoxA* this_ptr, int32_t action));

BINDING(0x262520, uint32_t, il2cpp_gchandle_new_weakref, (Il2CppObject* obj, bool track_resurrection))
BINDING(0x262540, Il2CppObject*, il2cpp_gc_get_target, (uint32_t gchandle))
BINDING(0x262560, uint32_t, il2cpp_gchandle_free, (uint32_t gchandle))

IL2CPP_BINDING(, OnScreenPositions, app::Vector3, get_TopCenter, ());
IL2CPP_BINDING(, OnScreenPositions, app::Vector3, get_BottomCenter, ());

std::string convert_csstring(app::String* str)
{
    std::string cppstr;
    if (str == nullptr)
        return cppstr;

    auto chars = System_String__ToCharArray(str);
    if (chars == nullptr)
        return cppstr;

    std::wstring wstr(reinterpret_cast<wchar_t*>(chars->vector), str->fields.m_stringLength);
    using convert_type = std::codecvt_utf8<wchar_t>;
    std::wstring_convert<convert_type, wchar_t> converter;
    cppstr = converter.to_bytes(wstr);

    return cppstr;
}

INJECT_C_DLLEXPORT void clear_visible_hints();
INJECT_C_DLLEXPORT void set_twillen_item(int shard, const wchar_t* name, const wchar_t* description);

namespace
{
    std::set<app::MessageBoxA*> tracked_boxes;
    app::MessageBoxA* npc_box = nullptr;
    app::MessageBoxA* below_hint_box = nullptr;
    app::String* last_message = nullptr;
    app::String* cached = nullptr;
    uint32_t last_handle = 0;
    uint32_t below_box_handle = 0;

    void print_csstring(app::String* str)
    {
        auto cppstr = convert_csstring(str);
        trace(MessageType::Info, 4, "csstring", cppstr);
    }

    // nullcheck helper
    bool is_visible(app::MessageBoxA* box)
    {
        return box && box->fields.Visibility && MessageBoxVisibility__get_Visible(box->fields.Visibility);
    }


    INTERCEPT(13866448, __int64, showSpiritTreeTextMessage, (__int64 a, __int64 b)) {
        //MessageControllerB$$ShowSpiritTreeTextMessage
        return 0;
    }

    INTERCEPT(13849632, __int64, showAbilityMessage, (__int64 a, __int64 b, __int64 c)) {
      //MessageControllerB$$ShowAbilityMessage
      return 0;
      }

    INTERCEPT(13850992, __int64, showShardMessage, (__int64 a, __int64 b, char c)) {
      //MessageControllerB$$ShowShardMessages
      return 0;
    }

    IL2CPP_BINDING(, MessageProvider, app::String__Array*, GetAllMessages, (app::MessageProvider* this_ptr));
    IL2CPP_INTERCEPT(, MessageControllerB, app::MessageBoxA*, ShowPickupMessage, (app::MessageControllerB* this_ptr, app::MessageProvider* message_provider, app::PickupContext* context, bool lockInput)) {
        if (context->fields.PickupType == app::PickupMessageIcon_PickupType__Enum_QuestItem) {
            auto arr = MessageProvider::GetAllMessages(context->fields.Name);
            if (arr->max_length > 0)
            {
                auto name = convert_csstring(arr->vector[0]);
                if (name == "Gorlek Ore")
                    return nullptr;
            }
        }

        return MessageControllerB::ShowPickupMessage(this_ptr, message_provider, context, lockInput);
    }

    // Gets called on gorlek ore, no effect on message.
    //IL2CPP_INTERCEPT(Moon, NPCEntity, void, CollectReward, (app::NPCEntity* this_ptr)) {
    //    NPCEntity_CollectReward(this_ptr);
    //    auto go = il2cpp::invoke<app::GameObject>(this_ptr, "get_GameObject");
    //    //this_ptr->fields.RewardTimeline
    //}

    IL2CPP_INTERCEPT(, MessageControllerB, app::MessageBoxA*, ShowSpellMessage, (app::MessageControllerB* t, app::MessageProvider* p, app::Quest* q)) {
        return nullptr;
    }

    // Don't think this ever gets called.
    IL2CPP_INTERCEPT(, MessageControllerB, app::MessageBoxA*, ShowCompleteQuestMessage, (app::MessageControllerB* t, app::MessageProvider* p, app::Quest* q)) {
        return nullptr;
    }

    // Don't think this ever gets called.
    IL2CPP_INTERCEPT(, MessageControllerB, app::MessageBoxA*, ShowUpdatedQuestMessage, (app::MessageControllerB* t, app::MessageProvider* p, app::Quest* q)) {
        return nullptr;
    }

    bool clear_on_next_update = false;
    INJECT_C_DLLEXPORT void clear_quest_messages()
    {
        clear_on_next_update = true;
    }

    IL2CPP_INTERCEPT(, QuestsController, void, Update, (app::QuestsController* this_ptr)) {
        if (clear_on_next_update)
        {
            il2cpp::invoke(this_ptr->fields.m_queuedQuestMessages, "Clear");
            clear_on_next_update = false;
        }

        QuestsController::Update(this_ptr);
    }

    INJECT_C_DLLEXPORT void message_item_callback(const wchar_t* str) {
        cached = reinterpret_cast<app::String*>(il2cpp::string_new(str));
    }

    INTERCEPT(13823536, void, MessageBox__Update, (app::MessageBoxA* this_ptr)) {
        MessageBox__Update(this_ptr);
        if (this_ptr == below_hint_box)
          return;
        if (tracked_boxes.find(this_ptr) == tracked_boxes.end() && is_visible(this_ptr))
        {
    //        debug("(index " + std::to_string(this_ptr->MessageIndex) + ") tracking visible untracked box at " + std::to_string((__int64)this_ptr));
            tracked_boxes.insert(this_ptr);
        }
    }

    INTERCEPT(6645664,void, NPCMessageBox__FixedUpdate, (app::NPCMessageBox* this_ptr)) {
        NPCMessageBox__FixedUpdate(this_ptr);
        if (this_ptr->fields.MessageBoxA != npc_box && is_visible(this_ptr->fields.MessageBoxA))
        {
    //        debug("(index " + std::to_string(this_ptr->MessageBox->MessageIndex)+ ") found interactable: " + std::to_string((__int64)this_ptr->MessageBox));
            npc_box = this_ptr->fields.MessageBoxA;
        }
    }

    INTERCEPT(13822720, void, MessageBox__OnDestroy, (app::MessageBoxA* this_ptr)) {
        MessageBox__OnDestroy(this_ptr);
        if (tracked_boxes.find(this_ptr) != tracked_boxes.end())
        {
    //        debug("intecepted destroy of tracked box, nulling it");
            tracked_boxes.erase(this_ptr);
        }
        if (this_ptr == below_hint_box)
          below_hint_box = nullptr;
    }

    app::MessageBoxA* display_below_helper(const wchar_t* info, float duration, bool mute) {
      try
      {
        if(mute)
          mute_for(30);
        if (below_hint_box && is_visible(below_hint_box)) {
          MessageBox__HideMessageScreenImmediately(below_hint_box, 0);
          below_hint_box = 0;
          if (below_box_handle) {
            il2cpp_gchandle_free(below_box_handle);
            below_box_handle = 0;
          }
        }
        auto msg = reinterpret_cast<app::String*>(il2cpp::string_new(info));
        const auto message_controller = get_ui()->static_fields->MessageController;
        below_hint_box = MessageControllerB__ShowHintSmallMessage(
          message_controller,
          app::MessageDescriptor{ msg, app::EmotionType__Enum_Neutral, nullptr, nullptr },
          OnScreenPositions::get_BottomCenter(),
          duration
        );
        below_hint_box->fields.MessageIndex = 1;
        below_box_handle = il2cpp_gchandle_new_weakref((Il2CppObject*)below_hint_box, true);
        return below_hint_box;
      }
      catch (...) {
        trace(MessageType::Debug, 3, "messages", "Error caught by display hint. This might not be fine?");
        return nullptr;
      }
    }

    app::MessageProvider* create_message_provider(Il2CppString* message)
    {
        auto provider = il2cpp::unity::create_scriptable_object<app::TranslatedMessageProvider>("", "TranslatedMessageProvider");
        il2cpp::invoke(provider, ".ctor");
        // TODO: Add input provider and message provider with different color.

        auto item = il2cpp::create_object<app::TranslatedMessageProvider_MessageItem>("", "TranslatedMessageProvider", "MessageItem");
        item->fields.English = reinterpret_cast<app::String*>(message);
        item->fields.Sound = nullptr;
        item->fields.WWiseEvent = nullptr;
        item->fields.Emotion = app::EmotionType__Enum_Neutral;
        il2cpp::invoke(provider->fields.Messages, "Add", item);
        return reinterpret_cast<app::MessageProvider*>(provider);
    }

    struct ShopItem
    {
        uint32_t name;
        uint32_t description;
        bool uses_energy;
    };

    std::unordered_map<uint16_t, ShopItem> opher_overrides;
    std::unordered_map<uint8_t, ShopItem> twillen_overrides;
    std::unordered_map<uint64_t, ShopItem> lupo_overrides;

    uint16_t get_key(app::WeaponmasterItem* item)
    {
        auto acquired = static_cast<uint16_t>(item->fields.Upgrade->fields.AcquiredAbilityType);
        auto required = static_cast<uint16_t>(item->fields.Upgrade->fields.RequiredAbility) << 8;
        return acquired | required;
    }

    IL2CPP_INTERCEPT(, WeaponmasterItem, app::MessageProvider*, get_ItemName, (app::WeaponmasterItem* this_ptr)) {
        auto key = get_key(this_ptr);
        auto it = opher_overrides.find(key);
        if (it == opher_overrides.end())
            return WeaponmasterItem::get_ItemName(this_ptr);
        else
            return reinterpret_cast<app::MessageProvider*>(il2cpp::gchandle_target(it->second.name));
    }

    IL2CPP_INTERCEPT(, WeaponmasterItem, app::MessageProvider*, get_ItemDescription, (app::WeaponmasterItem* this_ptr)) {
        auto key = get_key(this_ptr);
        auto it = opher_overrides.find(key);
        if (it == opher_overrides.end())
            return WeaponmasterItem::get_ItemDescription(this_ptr);
        else
            return reinterpret_cast<app::MessageProvider*>(il2cpp::gchandle_target(it->second.description));
    }

    // When does this happen?
    IL2CPP_INTERCEPT(, WeaponmasterItem, app::MessageProvider*, get_ItemNextLevelDescription, (app::WeaponmasterItem* this_ptr)) {
        return WeaponmasterItem::get_ItemNextLevelDescription(this_ptr);
    }

    IL2CPP_INTERCEPT(, WeaponmasterItem, bool, get_UsesEnergy, (app::WeaponmasterItem* this_ptr)) {
        auto key = get_key(this_ptr);
        auto it = opher_overrides.find(key);
        if (it == opher_overrides.end())
            return WeaponmasterItem::get_UsesEnergy(this_ptr);
        else
            return it->second.uses_energy;
    }

    IL2CPP_INTERCEPT(, MapmakerUIItem, void, UpdateMapmakerItem, (app::MapmakerUIItem* this_ptr, app::MapmakerItem* item)) {
        auto state_id = item->fields.UberState->fields._.m_id->fields.m_id;
        auto group_id = item->fields.UberState->fields.Group->fields._.m_id->fields.m_id;
        auto key = static_cast<uint64_t>(group_id & 0xFFFFFFFF) | (static_cast<uint64_t>(state_id & 0xFFFFFFFF) << 8);
        auto it = lupo_overrides.find(key);
        if (it != lupo_overrides.end())
        {
            item->fields.Name = reinterpret_cast<app::MessageProvider*>(il2cpp::gchandle_target(it->second.name));
            item->fields.Description = reinterpret_cast<app::MessageProvider*>(il2cpp::gchandle_target(it->second.description));
        }

        MapmakerUIItem::UpdateMapmakerItem(this_ptr, item);
    }

    STATIC_IL2CPP_BINDING(, UberShaderAPI, void, SetTexture, (app::Renderer* renderer, app::UberShaderProperty_Texture__Enum prop, app::Texture* texture));
    IL2CPP_BINDING(, MessageBox, void, RefreshText, (app::MessageBoxA* this_ptr, app::String* replace, app::String* with));
    IL2CPP_BINDING(UnityEngine, GameObject, void, SetActive, (app::GameObject* this_ptr, bool value));
    NESTED_IL2CPP_BINDING(Moon.uberSerializationWisp, PlayerUberStateShards, Shard, bool, get_Upgradable, (app::PlayerUberStateShards_Shard* this_ptr));
    NESTED_IL2CPP_BINDING(Moon.uberSerializationWisp, PlayerUberStateShards, Shard, bool, get_UpgradeAffordable, (app::PlayerUberStateShards_Shard* this_ptr));
    IL2CPP_BINDING(, SpellUIShardEquipStatus, void, SetEquipment, (app::SpellUIShardEquipStatus* this_ptr, app::EquipmentType__Enum type));

    IL2CPP_BINDING(, SpiritShardUIShardDetails, void, UpdateUpgradeDetails, (app::SpiritShardUIShardDetails* this_ptr));
    IL2CPP_INTERCEPT(, SpiritShardUIShardDetails, void, UpdateDetails, (app::SpiritShardUIShardDetails* this_ptr)) {
        app::MessageProvider* name_provider = nullptr;
        app::MessageProvider* description_provider = nullptr;

        auto item = this_ptr->fields.m_item;
        auto type = item->fields.m_type;
        auto it = twillen_overrides.find(static_cast<uint8_t>(type));
        if (it != twillen_overrides.end())
        {
            name_provider = reinterpret_cast<app::MessageProvider*>(il2cpp::gchandle_target(it->second.name));
            description_provider = reinterpret_cast<app::MessageProvider*>(il2cpp::gchandle_target(it->second.description));
        }

        auto settings = il2cpp::get_class<app::SpiritShardSettings__Class>("", "SpiritShardSettings")->static_fields->Instance;

        auto description = il2cpp::invoke<app::SpiritShardDescription>(settings->fields.Descriptions, "GetValue", &type);
        auto renderer_components = il2cpp::unity::get_components<app::Renderer>(this_ptr->fields.IconGO, "UnityEngine", "Renderer");
        auto renderer = renderer_components[0];
        if (!(item->fields.m_gained || !this_ptr->fields.RequireOwned))
            type = app::SpiritShardType__Enum_None;

        if (settings != nullptr)
        {
            auto empty_str = reinterpret_cast<app::String*>(il2cpp::string_new(""));
            auto icons = il2cpp::invoke<app::SpiritShardIconsCollection_Icons__Boxed>(settings->fields.Icons, "GetValue", &type);
            UberShaderAPI::SetTexture(renderer, app::UberShaderProperty_Texture__Enum_MainTexture, reinterpret_cast<app::Texture*>(icons->fields.HeaderIcon));

            auto message_box_components = il2cpp::unity::get_components<app::MessageBoxA>(this_ptr->fields.NameGO, "", "MessageBox");
            auto name_box = message_box_components[0];

            message_box_components = il2cpp::unity::get_components<app::MessageBoxA>(this_ptr->fields.DescriptionGO, "", "MessageBox");
            auto description_box = message_box_components[0];

            if (type == 0)
            {
                name_box->fields.MessageProvider = this_ptr->fields.LockedName;
                description_box->fields.MessageProvider = this_ptr->fields.LockedDescription;
            }
            else
            {
                name_box->fields.MessageProvider = name_provider == nullptr ? description->fields.Name : name_provider;
                auto property_levels = description->fields.UpgradablePropertyLevels;
                auto property_level = property_levels->fields._items->vector[item->fields.m_level];
                description_box->fields.MessageProvider = description_provider == nullptr ? property_level->fields.Description : description_provider;
            }

            MessageBox::RefreshText(name_box, empty_str, empty_str);
            MessageBox::RefreshText(description_box, empty_str, empty_str);
            SpiritShardUIShardDetails::UpdateUpgradeDetails(this_ptr);

            auto active = false;
            il2cpp::invoke(this_ptr->fields.LevelNextGO, "SetActive", &active);
            il2cpp::invoke(this_ptr->fields.LevelNextDescriptionGO, "SetActive", &active);

            if (this_ptr->fields.ShowEquipStatus)
                SpellUIShardEquipStatus::SetEquipment(this_ptr->fields.m_equipStatus, app::EquipmentType__Enum_None);
        }
    }
}

void hide_below_hint() {
    if (below_hint_box != nullptr)
        MessageBox__HideMessageScreenImmediately(below_hint_box, 0);
}

app::MessageBoxA* send_msg(const wchar_t* hint, float duration, app::Vector3 pos, bool mute) {
    try
    {
        if (mute)
            mute_for(30);

        clear_visible_hints();
        last_message = reinterpret_cast<app::String*>(il2cpp::string_new(hint));
        const auto message_controller = get_ui()->static_fields->MessageController;
        // Message box will probably take ownership of the string, so don't free it on the next call here.
        auto last_box = MessageControllerB__ShowHintSmallMessage(
            message_controller,
            app::MessageDescriptor{ last_message, app::EmotionType__Enum_Neutral, nullptr, nullptr },
            pos,
            duration
        );

        last_box->fields.MessageIndex = 1;
        last_handle = il2cpp_gchandle_new_weakref((Il2CppObject*)last_box, true);
        tracked_boxes.insert(last_box);
        return last_box;
    }
    catch (...) {
        trace(MessageType::Debug, 3, "messages", "Error caught by display hint. This might not be fine?");
        return nullptr;
    }
}

INJECT_C_DLLEXPORT void clear_visible_hints()
{
    try
    {
        for (std::set<app::MessageBoxA*>::iterator it = tracked_boxes.begin(); it != tracked_boxes.end(); ++it)
        {
            auto last_box = *it;
            if (last_box != npc_box && is_visible(last_box))
                MessageBox__HideMessageScreenImmediately(last_box, 0);
        }

        tracked_boxes.clear();
        if (last_handle)
        {
            il2cpp_gchandle_free(last_handle);
            last_handle = 0;
        }
    }
    catch (...) {
        trace(MessageType::Warning, 3, "messages", "Couldn't clear message box! This should not usually happen :C");
    }
}

INJECT_C_DLLEXPORT bool hints_ready() {
    return OnScreenPositions::get_TopCenter().y > 0;
}

INJECT_C_DLLEXPORT app::MessageBoxA * display_hint(const wchar_t* hint, float duration) {
    return send_msg(hint, duration, OnScreenPositions::get_TopCenter(), false);
}

INJECT_C_DLLEXPORT app::MessageBoxA * display_below(const wchar_t* hint, float duration) {
    return display_below_helper(hint, duration, false);
}

INJECT_C_DLLEXPORT app::MessageBoxA * update_map_hint(const wchar_t* info) {
    return display_below_helper(info, 20, true);
}

INJECT_C_DLLEXPORT app::String* get_current_hint()
{
    return last_message;
}

INJECT_C_DLLEXPORT void set_opher_item(int acquired, int required, const wchar_t* name, const wchar_t* description, bool uses_energy)
{
    auto key = static_cast<uint16_t>(acquired & 0xFF) | (static_cast<uint16_t>(required & 0xFF) << 8);
    auto it = opher_overrides.find(key);
    if (it != opher_overrides.end())
    {
        il2cpp::gchandle_free(it->second.name);
        il2cpp::gchandle_free(it->second.description);
    }

    auto& item = opher_overrides[key];
    auto provider = create_message_provider(il2cpp::string_new(name));
    item.name = il2cpp::gchandle_new(provider, false);
    provider = create_message_provider(il2cpp::string_new(description));
    item.description = il2cpp::gchandle_new(provider, false);
    item.uses_energy = uses_energy;
}

INJECT_C_DLLEXPORT void set_twillen_item(int shard, const wchar_t* name, const wchar_t* description)
{
    auto key = static_cast<uint8_t>(shard);
    auto it = twillen_overrides.find(key);
    if (it != twillen_overrides.end())
    {
        il2cpp::gchandle_free(it->second.name);
        il2cpp::gchandle_free(it->second.description);
    }

    auto& item = twillen_overrides[key];
    auto provider = create_message_provider(il2cpp::string_new(name));
    item.name = il2cpp::gchandle_new(provider, false);
    provider = create_message_provider(il2cpp::string_new(description));
    item.description = il2cpp::gchandle_new(provider, false);
}

INJECT_C_DLLEXPORT void set_lupo_item(int group_id, int state_id, const wchar_t* name, const wchar_t* description)
{
    auto key = static_cast<uint64_t>(group_id & 0xFFFFFFFF) | (static_cast<uint64_t>(state_id & 0xFFFFFFFF) << 8);
    auto it = lupo_overrides.find(key);
    if (it != lupo_overrides.end())
    {
        il2cpp::gchandle_free(it->second.name);
        il2cpp::gchandle_free(it->second.description);
    }

    auto& item = lupo_overrides[key];
    auto provider = create_message_provider(il2cpp::string_new(name));
    item.name = il2cpp::gchandle_new(provider, false);
    provider = create_message_provider(il2cpp::string_new(description));
    item.description = il2cpp::gchandle_new(provider, false);
}
