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

BINDING(30218144, app::Char__Array*, System_String__ToCharArray, (app::String* this_ptr))//System.String$$ToCharArray
BINDING(34816240, int, System_Array__get_Length, (app::Array* this_ptr)) //System.Array$$get_Length
BINDING(34805488, Il2CppObject*, System_Array__GetValue, (app::Array* thus_ptr, int index)) //System.Array$$GetValue

BINDING(13847344, app::MessageBox*, MessageControllerB__ShowHintSmallMessage, (app::MessageControllerB* this_ptr, app::MessageDescriptor descriptor, app::Vector3 position, float duration));
BINDING(13836768, bool, MessageBoxVisibility__get_Visible, (app::MessageBoxVisibility* this_ptr));
BINDING(13820848, void, MessageBox__HideMessageScreenImmediately, (app::MessageBox* this_ptr, int32_t action));
BINDING(13821184, void, MessageBox__HideMessageScreen, (app::MessageBox* this_ptr, int32_t action));

STATIC_IL2CPP_BINDING(, OnScreenPositions, app::Vector3, get_TopCenter, ());
STATIC_IL2CPP_BINDING(, OnScreenPositions, app::Vector3, get_BottomCenter, ());

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
    std::set<app::MessageBox*> tracked_boxes;
    app::MessageBox* npc_box = nullptr;
    app::MessageBox* below_hint_box = nullptr;
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
    bool is_visible(app::MessageBox* box)
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
    IL2CPP_INTERCEPT(, MessageControllerB, app::MessageBox*, ShowPickupMessage, (app::MessageControllerB* this_ptr, app::MessageProvider* message_provider, app::PickupContext* context, bool lockInput)) {
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

    INTERCEPT(13823536, void, MessageBox__Update, (app::MessageBox* this_ptr)) {
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
        if (this_ptr->fields.MessageBox != npc_box && is_visible(this_ptr->fields.MessageBox))
        {
    //        debug("(index " + std::to_string(this_ptr->MessageBox->MessageIndex)+ ") found interactable: " + std::to_string((__int64)this_ptr->MessageBox));
            npc_box = this_ptr->fields.MessageBox;
        }
    }

    INTERCEPT(13822720, void, MessageBox__OnDestroy, (app::MessageBox* this_ptr)) {
        MessageBox__OnDestroy(this_ptr);
        if (tracked_boxes.find(this_ptr) != tracked_boxes.end())
        {
    //        debug("intecepted destroy of tracked box, nulling it");
            tracked_boxes.erase(this_ptr);
        }
        if (this_ptr == below_hint_box)
          below_hint_box = nullptr;
    }

    app::MessageBox* display_below_helper(const wchar_t* info, float duration, bool mute) {
      try
      {
        if(mute)
          mute_for(30);
        if (below_hint_box && is_visible(below_hint_box)) {
          MessageBox__HideMessageScreenImmediately(below_hint_box, 0);
          below_hint_box = 0;
          if (below_box_handle) {
            il2cpp::gchandle_free(below_box_handle);
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
        below_box_handle = il2cpp::gchandle_new_weak((Il2CppObject*)below_hint_box, true);
        return below_hint_box;
      }
      catch (...) {
        trace(MessageType::Debug, 3, "messages", "Error caught by display hint. This might not be fine?");
        return nullptr;
      }
    }
}

void hide_below_hint() {
    if (below_hint_box != nullptr)
        MessageBox__HideMessageScreenImmediately(below_hint_box, 0);
}

app::MessageBox* send_msg(const wchar_t* hint, float duration, app::Vector3 pos, bool mute) {
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
        last_handle = il2cpp::gchandle_new_weak((Il2CppObject*)last_box, true);
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
        for (std::set<app::MessageBox*>::iterator it = tracked_boxes.begin(); it != tracked_boxes.end(); ++it)
        {
            auto last_box = *it;
            if (last_box != npc_box && is_visible(last_box))
                MessageBox__HideMessageScreenImmediately(last_box, 0);
        }

        tracked_boxes.clear();
        if (last_handle)
        {
            il2cpp::gchandle_free(last_handle);
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

INJECT_C_DLLEXPORT app::MessageBox * display_hint(const wchar_t* hint, float duration) {
    return send_msg(hint, duration, OnScreenPositions::get_TopCenter(), false);
}

INJECT_C_DLLEXPORT app::MessageBox * display_below(const wchar_t* hint, float duration) {
    return display_below_helper(hint, duration, false);
}

INJECT_C_DLLEXPORT app::MessageBox * update_map_hint(const wchar_t* info) {
    return display_below_helper(info, 20, true);
}

INJECT_C_DLLEXPORT app::String* get_current_hint()
{
    return last_message;
}
