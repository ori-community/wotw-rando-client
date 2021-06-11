#include <dll_main.h>
#include <features/messages.h>
#include <csharp_bridge.h>

#include <Common/ext.h>
#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>

#include <set>
#include <locale>
#include <codecvt>
#include <unordered_map>
#include <xstring>

using namespace modloader;

IL2CPP_BINDING(System, String, app::Char__Array*, ToCharArray, (app::String* this_ptr))
bool area_map_open = false;
std::string convert_csstring(app::String* str)
{
    std::string cppstr;
    if (str == nullptr)
        return cppstr;

    auto chars = String::ToCharArray(str);
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
    // Noop intercepts.

    IL2CPP_INTERCEPT(, MessageControllerB, app::GameObject*, ShowSpiritTreeTextMessage, (app::MessageControllerB* this_ptr, app::MessageProvider* provider, app::Vector3 position)) {
        return nullptr;
    }

    IL2CPP_INTERCEPT(, MessageControllerB, app::GameObject*, ShowAbilityMessage, (app::MessageControllerB* this_ptr, app::MessageProvider* provider, int32_t ability)) {
        return nullptr;
    }

    IL2CPP_INTERCEPT(, MessageControllerB, app::GameObject*, ShowShardMessage, (app::MessageControllerB* this_ptr, app::MessageProvider* provider, app::GameObject* av, app::SpiritShardType__Enum shard)) {
        return nullptr;
    }

    IL2CPP_INTERCEPT(, MessageControllerB, app::MessageBox*, ShowSpellMessage, (app::MessageControllerB* t, app::MessageProvider* p, app::Quest* q)) {
        return nullptr;
    }

    // Don't think this ever gets called.
    IL2CPP_INTERCEPT(, MessageControllerB, app::MessageBox*, ShowCompleteQuestMessage, (app::MessageControllerB* t, app::MessageProvider* p, app::Quest* q)) {
        return nullptr;
    }

    // Don't think this ever gets called.
    IL2CPP_INTERCEPT(, MessageControllerB, app::MessageBox*, ShowUpdatedQuestMessage, (app::MessageControllerB* t, app::MessageProvider* p, app::Quest* q)) {
        return nullptr;
    }

    // Noop default zone hints.
    IL2CPP_INTERCEPT(, MessageZoneB, void, FixedUpdate, (app::MessageZoneB* this_ptr)) {

    }

    std::set<app::MessageBox*> tracked_boxes;
    app::MessageBox* npc_box = nullptr;
    app::MessageBox* below_hint_box = nullptr;
    app::String* last_message = nullptr;
    app::String* cached = nullptr;
    uint32_t last_handle = 0;
    uint32_t below_box_handle = 0;

    IL2CPP_BINDING_OVERLOAD(, MessageControllerB, app::MessageBox*, ShowHintSmallMessage, (app::MessageControllerB* this_ptr, app::MessageDescriptor descriptor, app::Vector3 position, float duration), (MessageDescriptor, UnityEngine : Vector3, System : Single));
    IL2CPP_BINDING(, MessageBoxVisibility, bool, get_Visible, (app::MessageBoxVisibility* this_ptr));
    IL2CPP_BINDING(, MessageBox, void, HideMessageScreenImmediately, (app::MessageBox* this_ptr, int32_t action));
    IL2CPP_BINDING(, MessageBox, void, HideMessageScreen, (app::MessageBox* this_ptr, int32_t action));

    STATIC_IL2CPP_BINDING(, OnScreenPositions, app::Vector3, get_TopCenter, ());
    STATIC_IL2CPP_BINDING(, OnScreenPositions, app::Vector3, get_BottomCenter, ());

    IL2CPP_BINDING(, SeinLogicCycle, app::SeinLogicCycle_StateFlags__Enum, GetFlags, (app::SeinLogicCycle* this_ptr, app::SeinLogicCycle_StateFlags__Enum test));
    
    void print_csstring(app::String* str)
    {
        auto cppstr = convert_csstring(str);
        trace(MessageType::Info, 4, "csstring", cppstr);
    }

    // nullcheck helper
    bool is_visible(app::MessageBox* box)
    {
        return box && box->fields.Visibility && MessageBoxVisibility::get_Visible(box->fields.Visibility);
    }

    IL2CPP_BINDING(, MessageProvider, app::String__Array*, GetAllMessages, (app::MessageProvider* this_ptr));
    IL2CPP_INTERCEPT(, MessageControllerB, app::MessageBox*, ShowPickupMessage, (app::MessageControllerB* this_ptr, app::MessageProvider* message_provider, app::PickupContext* context, bool lockInput)) {
        if (context->fields.PickupType == app::PickupMessageIcon_PickupType__Enum_QuestItem) {
            auto arr = MessageProvider::GetAllMessages(context->fields.Name);
            if (arr->max_length > 0)
            {
                auto name = convert_csstring(arr->vector[0]);
                if (name == "Gorlek Ore" || name == "Giant Spirit Light Container")
                    return nullptr;
            }
        }

        return MessageControllerB::ShowPickupMessage(this_ptr, message_provider, context, lockInput);
    }

    struct RandoMessage
    {
        app::Vector3 pos;
        std::wstring text;
        float duration;
        bool mute;
        bool below;
    };

    std::vector<RandoMessage> messages;

    STATIC_IL2CPP_BINDING(Game, UI, bool, get_MainMenuVisible, ());
    STATIC_IL2CPP_BINDING(Game, UI, bool, get_WorldMapVisible, ());
    STATIC_IL2CPP_BINDING(Game, UI, bool, get_ShardShopVisible, ());
    STATIC_IL2CPP_BINDING(Game, UI, bool, get_WeaponmasterScreenVisible, ());
    STATIC_IL2CPP_BINDING(Game, UI, bool, get_BuilderScreenVisible, ());
    STATIC_IL2CPP_BINDING(Game, UI, bool, get_GardenerScreenVisible, ());

    bool should_handle_messages()
    {
        reinterpret_cast<app::UI*>(il2cpp::get_class("Game", "UI"));
        if (UI::get_MainMenuVisible())
        {
            const auto map_is_open = UI::get_WorldMapVisible();
            const auto shard_is_open = UI::get_ShardShopVisible();
            const auto weapon_is_open = UI::get_WeaponmasterScreenVisible();
            const auto builder_is_open = UI::get_BuilderScreenVisible();
            const auto gardener_is_open = UI::get_GardenerScreenVisible();

            if (area_map_open ||
                map_is_open ||
                shard_is_open ||
                weapon_is_open ||
                builder_is_open ||
                gardener_is_open)
                return true;

            return false;
        }

        if (SeinLogicCycle::GetFlags(get_sein()->fields.LogicCycle, app::SeinLogicCycle_StateFlags__Enum_IsInteracting) == 0)
            return true;

        return false;
    }

    uint32_t set_box(app::MessageBox** box, const RandoMessage& message)
    {
        auto msg = reinterpret_cast<app::String*>(il2cpp::string_new(message.text));
        const auto message_controller = get_ui()->static_fields->MessageController;
        *box = MessageControllerB::ShowHintSmallMessage(
            message_controller,
            app::MessageDescriptor{ msg, app::EmotionType__Enum_Neutral, nullptr, nullptr },
            message.pos,
            message.duration
        );
        (*box)->fields.MessageIndex = 1;
        return il2cpp::gchandle_new_weak((Il2CppObject*)(*box), true);
    }

    void show_msg(const RandoMessage& message)
    {
        if (message.mute)
            mute_for(15);

        if (message.below)
        {
            // Kill the current box.
            if (below_hint_box && is_visible(below_hint_box))
            {
                MessageBox::HideMessageScreenImmediately(below_hint_box, 0);
                below_hint_box = 0;
                if (below_box_handle)
                {
                    il2cpp::gchandle_free(below_box_handle);
                    below_box_handle = 0;
                }
            }

            below_box_handle = set_box(&below_hint_box, message);
        }
        else
        {
            app::MessageBox* box = nullptr;
            last_handle = set_box(&box, message);
            last_message = box->fields.m_currentMessage.Message;;
            tracked_boxes.insert(box);
        }
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

        if (should_handle_messages())
        {
            for (const auto& message : messages)
                show_msg(message);

            messages.clear();
        }

        QuestsController::Update(this_ptr);
    }

    INJECT_C_DLLEXPORT void message_item_callback(const wchar_t* str) {
        cached = reinterpret_cast<app::String*>(il2cpp::string_new(str));
    }

    IL2CPP_INTERCEPT(, MessageBox, void, Update, (app::MessageBox* this_ptr)) {
        MessageBox::Update(this_ptr);
        if (this_ptr == below_hint_box || this_ptr == nullptr)
          return;

        if (tracked_boxes.find(this_ptr) == tracked_boxes.end() && is_visible(this_ptr))
            tracked_boxes.insert(this_ptr);
    }

    // Probably not needed anymore?
    //IL2CPP_INTERCEPT(, NPCMessageBox, void, FixedUpdate, (app::NPCMessageBox* this_ptr)) {
    //    NPCMessageBox::FixedUpdate(this_ptr);
    //    if (this_ptr->fields.MessageBox != npc_box && is_visible(this_ptr->fields.MessageBox))
    //        npc_box = this_ptr->fields.MessageBox;
    //}

    IL2CPP_INTERCEPT(, MessageBox, void, OnDestroy, (app::MessageBox* this_ptr)) {
        MessageBox::OnDestroy(this_ptr);
        if (tracked_boxes.find(this_ptr) != tracked_boxes.end())
            tracked_boxes.erase(this_ptr);

        if (this_ptr == below_hint_box)
            below_hint_box = nullptr;
    }
}

void hide_below_hint() {
    if (below_hint_box != nullptr)
        MessageBox::HideMessageScreenImmediately(below_hint_box, 0);
}

INJECT_C_DLLEXPORT void clear_visible_hints()
{
    if (!should_handle_messages())
        return;

    for (auto* box : tracked_boxes)
    {
        if (box != npc_box && is_visible(box))
            MessageBox::HideMessageScreenImmediately(box, 0);
    }

    tracked_boxes.clear();
    if (last_handle)
    {
        il2cpp::gchandle_free(last_handle);
        last_handle = 0;
    }
}

INJECT_C_DLLEXPORT bool hints_ready() {
    return OnScreenPositions::get_TopCenter().y > 0 &&
        should_handle_messages();
}

INJECT_C_DLLEXPORT void display_hint(const wchar_t* hint, float duration, float ypos, bool mute)
{
    auto pos = OnScreenPositions::get_TopCenter();
    pos.y = ypos;
    messages.push_back({ pos, hint, duration, mute, false });
}

INJECT_C_DLLEXPORT void display_below(const wchar_t* hint, float duration, bool mute)
{
    messages.push_back({ OnScreenPositions::get_BottomCenter(), hint, duration, mute, true });
}

INJECT_C_DLLEXPORT void update_map_hint(const wchar_t* info)
{
    messages.push_back({ OnScreenPositions::get_BottomCenter(), info, 20, true, true });
}

INJECT_C_DLLEXPORT app::String* get_current_hint()
{
    return last_message;
}
