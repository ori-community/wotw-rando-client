#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayFabEventType__Enum.h>
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/EventContents.h>
#include <Modloader/app/structs/Guid.h>
#include <Modloader/app/structs/PlayFabEvent.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::PlayFab::PlayFabEvent {
    IL2CPP_REGISTER_METHOD(0x002FC6D0, app::PlayFabEventType__Enum, get_EventType, (app::PlayFabEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, set_EventType, (app::PlayFabEvent * this_ptr, app::PlayFabEventType__Enum value))
    IL2CPP_REGISTER_METHOD(0x0195B0D0, app::String*, get_Name, (app::PlayFabEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A27F10, void, set_Name, (app::PlayFabEvent * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::EventContents*, get_EventContents, (app::PlayFabEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_EventContents, (app::PlayFabEvent * this_ptr, app::EventContents* value))
    IL2CPP_REGISTER_METHOD(0x01A27F30, void, ctor, (app::PlayFabEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A28160, void, SetProperty_1, (app::PlayFabEvent * this_ptr, app::String* name, app::String* value))
    IL2CPP_REGISTER_METHOD(0x01A283B0, void, SetProperty_2, (app::PlayFabEvent * this_ptr, app::String* name, bool value))
    IL2CPP_REGISTER_METHOD(0x01A28610, void, SetProperty_3, (app::PlayFabEvent * this_ptr, app::String* name, app::DateTime value))
    IL2CPP_REGISTER_METHOD(0x01A28890, void, SetProperty_4, (app::PlayFabEvent * this_ptr, app::String* name, int64_t value))
    IL2CPP_REGISTER_METHOD(0x01A28AE0, void, SetProperty_5, (app::PlayFabEvent * this_ptr, app::String* name, double value))
    IL2CPP_REGISTER_METHOD(0x01A28D40, void, SetProperty_6, (app::PlayFabEvent * this_ptr, app::String* name, app::Guid value))
} // namespace app::classes::PlayFab::PlayFabEvent
