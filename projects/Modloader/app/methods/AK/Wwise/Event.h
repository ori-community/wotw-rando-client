#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/WwiseObjectType__Enum.h>
#include <Modloader/app/structs/AkActionOnEventType__Enum.h>
#include <Modloader/app/structs/AkCallbackManager_EventCallback.h>
#include <Modloader/app/structs/AkCurveInterpolation__Enum.h>
#include <Modloader/app/structs/AkMIDIPostArray.h>
#include <Modloader/app/structs/CallbackFlags.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::AK::Wwise::Event {
    IL2CPP_REGISTER_METHOD(0x00420230, app::WwiseObjectType__Enum, get_WwiseObjectType, (app::Event_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, VerifyPlayingID, (app::Event_1 * this_ptr, uint32_t playing_id))
    IL2CPP_REGISTER_METHOD(0x026C1E20, uint32_t, Post_1, (app::Event_1 * this_ptr, uint64_t game_object))
    IL2CPP_REGISTER_METHOD(0x026C1F00, uint32_t, Post_2, (app::Event_1 * this_ptr, app::GameObject* game_object))
    IL2CPP_REGISTER_METHOD(0x026C20C0, uint32_t, Post_3, (app::Event_1 * this_ptr, app::GameObject* game_object, app::CallbackFlags* flags, app::AkCallbackManager_EventCallback* callback, app::Object* cookie))
    IL2CPP_REGISTER_METHOD(0x026C21E0, uint32_t, Post_4, (app::Event_1 * this_ptr, uint64_t game_object, app::CallbackFlags* flags, app::AkCallbackManager_EventCallback* callback, app::Object* cookie))
    IL2CPP_REGISTER_METHOD(0x026C2300, uint32_t, Post_5, (app::Event_1 * this_ptr, app::GameObject* game_object, uint32_t flags, app::AkCallbackManager_EventCallback* callback, app::Object* cookie))
    IL2CPP_REGISTER_METHOD(0x026C2410, uint32_t, Post_6, (app::Event_1 * this_ptr, uint64_t game_object, uint32_t flags, app::AkCallbackManager_EventCallback* callback, app::Object* cookie))
    IL2CPP_REGISTER_METHOD(0x026C2520, void, Stop, (app::Event_1 * this_ptr, app::GameObject* game_object, int32_t transition_duration, app::AkCurveInterpolation__Enum curve_interpolation))
    IL2CPP_REGISTER_METHOD(0x026C2550, void, ExecuteAction, (app::Event_1 * this_ptr, app::GameObject* game_object, app::AkActionOnEventType__Enum action_on_event_type, int32_t transition_duration, app::AkCurveInterpolation__Enum curve_interpolation))
    IL2CPP_REGISTER_METHOD(0x026C2780, void, PostMIDI_1, (app::Event_1 * this_ptr, app::GameObject* game_object, app::AkMIDIPostArray* array))
    IL2CPP_REGISTER_METHOD(0x026C28C0, void, PostMIDI_2, (app::Event_1 * this_ptr, app::GameObject* game_object, app::AkMIDIPostArray* array, int32_t count))
    IL2CPP_REGISTER_METHOD(0x026C2A30, void, StopMIDI_1, (app::Event_1 * this_ptr, app::GameObject* game_object))
    IL2CPP_REGISTER_METHOD(0x026C2C30, void, StopMIDI_2, (app::Event_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026C1170, void, ctor, (app::Event_1 * this_ptr))
} // namespace app::classes::AK::Wwise::Event
