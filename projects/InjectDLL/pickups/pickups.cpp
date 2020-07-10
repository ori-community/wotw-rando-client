#include <interception_macros.h>
#include <dll_main.h>
#include <common.h>
#include <pickups/pickups.h>

bool collecting_pickup = false;

IL2CPP_INTERCEPT(, SeinUI, void, ShakeSpiritLight, (app::SeinUI* thisPtr)) {
    if (collecting_pickup)
        return;

    SeinUI_ShakeSpiritLight(thisPtr);
}

IL2CPP_INTERCEPT(, SeinUI, void, ShakeKeystones, (app::SeinUI* thisPtr)) {
    if (collecting_pickup)
        return;

    SeinUI_ShakeKeystones(thisPtr);
}

IL2CPP_INTERCEPT(, SeinUI, void, ShakeSeeds, (app::SeinUI* thisPtr)) {
    if (collecting_pickup)
        return;

    SeinUI_ShakeSeeds(thisPtr);
}

extern "C" __declspec(dllexport)
void shake_spiritlight()
{
    if (get_ui()->static_fields->SeinUI == nullptr)
        trace(MessageType::Error, 2, "game", "SeinUI is invalid!");
    else
        SeinUI_ShakeSpiritLight(get_ui()->static_fields->SeinUI);
}

extern "C" __declspec(dllexport)
void shake_keystone()
{
    if (get_ui()->static_fields->SeinUI == nullptr)
        trace(MessageType::Error, 2, "game", "SeinUI is invalid!");
    else
        SeinUI_ShakeKeystones(get_ui()->static_fields->SeinUI);
}

extern "C" __declspec(dllexport)
void shake_ore()
{
    if (get_ui()->static_fields->SeinUI == nullptr)
        trace(MessageType::Error, 2, "game", "SeinUI is invalid!");
    else
        SeinUI_ShakeSeeds(get_ui()->static_fields->SeinUI);
}

IL2CPP_BINDING(, MessageProvider, app::String__Array*, GetAllMessages, (app::MessageProvider* this_ptr));
IL2CPP_INTERCEPT(, MessageControllerB, app::MessageBox*, ShowPickupMessage, (app::MessageControllerB* this_ptr, app::MessageProvider* message_provider, app::PickupContext* context, bool lockInput)) {
  if (context->fields.PickupType == app::PickupMessageIcon_PickupType__Enum_QuestItem) {
    auto arr = MessageProvider_GetAllMessages(context->fields.Name);
    if (arr->max_length > 0)
    {
      auto name = convert_csstring(arr->vector[0]);
      if (name == "Gorlek Ore")
        return nullptr;
    }
  }

  return MessageControllerB_ShowPickupMessage(this_ptr, message_provider, context, lockInput);
}
IL2CPP_INTERCEPT(, SeinPickupProcessor, void, PerformPickupSequence, (app::SeinPickupProcessor* thisPtr, app::SeinPickupProcessor_CollectableInfo* info)) {

}
