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
IL2CPP_BINDING(System, Array, int, get_Length, (app::Array* this_ptr))
IL2CPP_BINDING_OVERLOAD(System, Array, Il2CppObject*, GetValue, (app::Array* thus_ptr, long index), (System:Int64))

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


    IL2CPP_INTERCEPT(, MessageControllerB, app::GameObject*, ShowSpiritTreeTextMessage, (app::MessageControllerB* this_ptr, app::MessageProvider* provider, app::Vector3 position)) {
        return NULL;
    }

    IL2CPP_INTERCEPT(, MessageControllerB, app::GameObject*, ShowAbilityMessage, (app::MessageControllerB* this_ptr, app::MessageProvider* provider, int32_t ability)) {
      return NULL;
    }

    IL2CPP_INTERCEPT(, MessageControllerB, app::GameObject*, ShowShardMessage, (app::MessageControllerB* this_ptr, app::MessageProvider* provider, app::GameObject* av, app::SpiritShardType__Enum shard)) {
        return NULL;
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

    IL2CPP_INTERCEPT(, MessageBox, void, Update, (app::MessageBox* this_ptr)) {
        MessageBox::Update(this_ptr);
        if (this_ptr == below_hint_box || this_ptr == NULL)
          return;
        if (tracked_boxes.find(this_ptr) == tracked_boxes.end() && is_visible(this_ptr)) {
            tracked_boxes.insert(this_ptr);
        }
    }

    IL2CPP_INTERCEPT(, NPCMessageBox, void, FixedUpdate, (app::NPCMessageBox* this_ptr)) {
        NPCMessageBox::FixedUpdate(this_ptr);
        if (this_ptr->fields.MessageBox != npc_box && is_visible(this_ptr->fields.MessageBox))
        {
    //        debug("(index " + std::to_string(this_ptr->MessageBox->MessageIndex)+ ") found interactable: " + std::to_string((__int64)this_ptr->MessageBox));
            npc_box = this_ptr->fields.MessageBox;
        }
    }

    IL2CPP_INTERCEPT(, MessageBox, void, OnDestroy, (app::MessageBox* this_ptr)) {
        MessageBox::OnDestroy(this_ptr);
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
          mute_for(15);
        if (below_hint_box && is_visible(below_hint_box)) {
          MessageBox::HideMessageScreenImmediately(below_hint_box, 0);
          below_hint_box = 0;
          if (below_box_handle) {
            il2cpp::gchandle_free(below_box_handle);
            below_box_handle = 0;
          }
        }
        auto msg = reinterpret_cast<app::String*>(il2cpp::string_new(info));
        const auto message_controller = get_ui()->static_fields->MessageController;
        below_hint_box = MessageControllerB::ShowHintSmallMessage(
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
        MessageBox::HideMessageScreenImmediately(below_hint_box, 0);
}

app::MessageBox* send_msg(const wchar_t* hint, float duration, app::Vector3 pos, bool mute) {
    try
    {
        if (mute)
            mute_for(15);

        last_message = reinterpret_cast<app::String*>(il2cpp::string_new(hint));
        const auto message_controller = get_ui()->static_fields->MessageController;
        // Message box will probably take ownership of the string, so don't free it on the next call here.
        auto last_box = MessageControllerB::ShowHintSmallMessage(
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
                MessageBox::HideMessageScreenImmediately(last_box, 0);
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

INJECT_C_DLLEXPORT app::MessageBox* display_hint(const wchar_t* hint, float duration, float ypos, bool mute) {
    auto pos = OnScreenPositions::get_TopCenter();
    pos.y = ypos;
    return send_msg(hint, duration, pos, mute);
}

INJECT_C_DLLEXPORT app::MessageBox * display_below(const wchar_t* hint, float duration, bool mute) {
    return display_below_helper(hint, duration, mute);
}

INJECT_C_DLLEXPORT app::MessageBox * update_map_hint(const wchar_t* info) {
    return display_below_helper(info, 20, true);
}

INJECT_C_DLLEXPORT app::String* get_current_hint()
{
    return last_message;
}
