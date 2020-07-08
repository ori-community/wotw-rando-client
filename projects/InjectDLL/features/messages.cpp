#include <interception_macros.h>
#include <dll_main.h>
#include <il2cpp_helpers.h>

#include <csharp_bridge.h>

#include <set>
#include <locale>
#include <codecvt>
#include <xstring>

BINDING(30218144, app::Char__Array*, System_String__ToCharArray, (app::String* this_ptr))//System.String$$ToCharArray
BINDING(34816240, int, System_Array__get_Length, (app::Array* this_ptr)) //System.Array$$get_Length
BINDING(34805488, Il2CppObject*, System_Array__GetValue, (app::Array* thus_ptr, int index)) //System.Array$$GetValue

BINDING(13847344, app::MessageBox*, MessageControllerB__ShowHintSmallMessage, (app::MessageControllerB* this_ptr, app::MessageDescriptor descriptor, app::Vector3 position, float duration));
BINDING(5621248, app::Vector3, OnScreenPositions__get_TopCenter, ());
BINDING(13836768, bool, MessageBoxVisibility__get_Visible, (app::MessageBoxVisibility* this_ptr));
BINDING(13820848, void, MessageBox__HideMessageScreenImmediately, (app::MessageBox* this_ptr, int32_t action));
BINDING(13821184, void, MessageBox__HideMessageScreen, (app::MessageBox* this_ptr, int32_t action));

BINDING(0x262520, uint32_t, il2cpp_gchandle_new_weakref, (Il2CppObject* obj, bool track_resurrection))
BINDING(0x262540, Il2CppObject*, il2cpp_gc_get_target, (uint32_t gchandle))
BINDING(0x262560, uint32_t, il2cpp_gchandle_free, (uint32_t gchandle))

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

namespace
{
    std::set<app::MessageBox*> tracked_boxes;
    app::MessageBox* npc_box = nullptr;
    app::String* last_message = nullptr;
    app::String* cached = nullptr;
    uint32_t last_handle = 0;

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
  //MessageControllerB$$ShowShardMessage
  return 0;
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

bool prevent_quest = false;
INJECT_C_DLLEXPORT void prevent_quest_messages(bool value)
{
    prevent_quest = value;
}

IL2CPP_INTERCEPT(, QuestsController, void, Update, (app::QuestsController* this_ptr)) {
    if (prevent_quest)
        il2cpp::invoke(this_ptr->fields.m_queuedQuestMessages, "Clear");

    QuestsController_Update(this_ptr);
}

INJECT_C_DLLEXPORT void message_item_callback(const char* str) {
    cached = reinterpret_cast<app::String*>(il2cpp::string_new(str));
}

NESTED_IL2CPP_INTERCEPT(, TranslatedMessageProvider, MessageItem, app::MessageDescriptor, GetDescriptor, (app::TranslatedMessageProvider_MessageItem* this_ptr, int32_t language)) {
  auto result = TranslatedMessageProvider_MessageItem_GetDescriptor(this_ptr, language);
  if (result.Message != nullptr && is_in_shop_screen()){
    auto shop_str = convert_csstring(result.Message);
    auto wrote_str = csharp_bridge::shop_string_repl(shop_str.c_str());
    if (wrote_str)
      result.Message = cached;
  }

  return result;
}

INTERCEPT(13823536, void, MessageBox__Update, (app::MessageBox* this_ptr)) {
    MessageBox__Update(this_ptr);
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
}

extern "C" __declspec(dllexport)
void clear_visible_hints()
{
    try
    {
        for (std::set<app::MessageBox*>::iterator it = tracked_boxes.begin(); it != tracked_boxes.end(); ++it)
        {
            auto last_box = *it;
            if (last_box != npc_box && last_box->fields.Visibility && MessageBoxVisibility__get_Visible(last_box->fields.Visibility))
                MessageBox__HideMessageScreenImmediately(last_box, 0);
        }

        tracked_boxes.clear();
        if (last_handle)
        {
            il2cpp_gchandle_free(last_handle);
            last_handle = 0;
        }
    } catch (...) {
        trace(MessageType::Warning, 3, "messages", "Couldn't clear message box! This should not usually happen :C");
    }
}

app::Vector3 print_position;
extern "C" __declspec(dllexport)
bool hints_ready()
{
    print_position = OnScreenPositions__get_TopCenter();
    return print_position.y > 0;
}

extern "C" __declspec(dllexport)
app::MessageBox* display_hint(const char * hint, float duration)
{
    try
    {
        clear_visible_hints();
        last_message = reinterpret_cast<app::String*>(il2cpp::string_new(hint));

        const auto message_controller = get_ui()->static_fields->MessageController;
        // Message box will probably take ownership of the string, so don't free it on the next call here.
        auto last_box = MessageControllerB__ShowHintSmallMessage(
            message_controller,
            app::MessageDescriptor{ last_message, app::EmotionType__Enum_Neutral, nullptr, nullptr },
            print_position,
            duration
        );

        last_box->fields.MessageIndex = 1;
        last_handle = il2cpp_gchandle_new_weakref((Il2CppObject*) last_box, true);
        tracked_boxes.insert(last_box);
        return last_box;
    } catch (...) {
        trace(MessageType::Debug, 3, "messages", "Error caught by display hint. This might not be fine?");
        return nullptr;
    }
}

extern "C" __declspec(dllexport)
app::String * get_current_hint()
{
    return last_message;
}
