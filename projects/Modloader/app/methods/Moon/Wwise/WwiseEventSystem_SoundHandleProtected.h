#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AkActionOnEventType__Enum.h>
#include <Modloader/app/structs/AkCallbackInfo.h>
#include <Modloader/app/structs/AkCallbackManager_EventCallback.h>
#include <Modloader/app/structs/AkCallbackType__Enum.h>
#include <Modloader/app/structs/AkCurveInterpolation__Enum.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/ISoundHost.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/WwiseEventSystem_EventState.h>
#include <Modloader/app/structs/WwiseEventSystem_SoundHandleProtected.h>

namespace app::classes::Moon::Wwise::WwiseEventSystem_SoundHandleProtected {
    IL2CPP_REGISTER_METHOD(0x002FB990, int64_t, get_Version, app::WwiseEventSystem_SoundHandleProtected* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02713DE0, bool, get_IsActive, app::WwiseEventSystem_SoundHandleProtected* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::WwiseEventSystem_EventState*, get_State, app::WwiseEventSystem_SoundHandleProtected* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02713E20, void, Play, app::WwiseEventSystem_SoundHandleProtected* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x027141A0,
        void,
        Stop,
        app::WwiseEventSystem_SoundHandleProtected* this_ptr,
        int32_t transit_time_ms,
        app::AkCurveInterpolation__Enum curve
    )
    IL2CPP_REGISTER_METHOD(
        0x027141E0,
        void,
        Pause,
        app::WwiseEventSystem_SoundHandleProtected* this_ptr,
        int32_t transit_time_ms,
        app::AkCurveInterpolation__Enum curve
    )
    IL2CPP_REGISTER_METHOD(
        0x02714220,
        void,
        Resume,
        app::WwiseEventSystem_SoundHandleProtected* this_ptr,
        int32_t transit_time_ms,
        app::AkCurveInterpolation__Enum curve
    )
    IL2CPP_REGISTER_METHOD(
        0x02714260,
        void,
        Break,
        app::WwiseEventSystem_SoundHandleProtected* this_ptr,
        int32_t transit_time_ms,
        app::AkCurveInterpolation__Enum curve
    )
    IL2CPP_REGISTER_METHOD(
        0x027142A0,
        void,
        ReleaseEnvelope,
        app::WwiseEventSystem_SoundHandleProtected* this_ptr,
        int32_t transit_time_ms,
        app::AkCurveInterpolation__Enum curve
    )
    IL2CPP_REGISTER_METHOD(
        0x027142D0,
        void,
        RegisterCallback,
        app::WwiseEventSystem_SoundHandleProtected* this_ptr,
        app::AkCallbackType__Enum flags,
        app::AkCallbackManager_EventCallback* callback
    )
    IL2CPP_REGISTER_METHOD(
        0x027142E0,
        void,
        DispatchAction,
        app::WwiseEventSystem_SoundHandleProtected* this_ptr,
        app::AkActionOnEventType__Enum action,
        int32_t transit_time_ms,
        app::AkCurveInterpolation__Enum curve
    )
    IL2CPP_REGISTER_METHOD(
        0x02714660,
        void,
        CallbackInvoked,
        app::WwiseEventSystem_SoundHandleProtected* this_ptr,
        app::Object* cookie,
        app::AkCallbackType__Enum type,
        app::AkCallbackInfo* info
    )
    IL2CPP_REGISTER_METHOD(
        0x02714840,
        void,
        ProcessCallback,
        app::WwiseEventSystem_SoundHandleProtected* this_ptr,
        app::Object* cookie,
        app::AkCallbackType__Enum type,
        app::AkCallbackInfo* info
    )
    IL2CPP_REGISTER_METHOD(0x02714C00, void, ProcessedQueuedCallbacks, )
    IL2CPP_REGISTER_METHOD(0x02714EB0, int64_t, Bind, app::WwiseEventSystem_SoundHandleProtected* this_ptr, app::Event_1* wise_event, app::ISoundHost* host)
    IL2CPP_REGISTER_METHOD(0x02714F20, void, Reset, app::WwiseEventSystem_SoundHandleProtected* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02714F60, void, ctor, app::WwiseEventSystem_SoundHandleProtected* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027150A0, void, cctor, )
} // namespace app::classes::Moon::Wwise::WwiseEventSystem_SoundHandleProtected
