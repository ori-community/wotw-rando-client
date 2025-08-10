#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Action_1_Single_.h>
#include <Modloader/app/structs/Animator.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/GenericPuppet.h>
#include <Modloader/app/structs/ILegacyTimelineStateObserver.h>
#include <Modloader/app/structs/LegacyTimelineState.h>

namespace app::classes::Moon::Timeline::LegacyTimelineState {
    IL2CPP_REGISTER_METHOD(0x00773A10, bool, get_InPreviewMode, )
    IL2CPP_REGISTER_METHOD(0x00773AB0, void, set_InPreviewMode, bool value)
    IL2CPP_REGISTER_METHOD(0x00773B60, bool, get_IsOriAnimatorDrivingOri, )
    IL2CPP_REGISTER_METHOD(0x00773C00, void, set_IsOriAnimatorDrivingOri, bool value)
    IL2CPP_REGISTER_METHOD(0x00773CB0, bool, get_ShouldTimelineAnimateCamera, )
    IL2CPP_REGISTER_METHOD(0x00773D50, void, set_ShouldTimelineAnimateCamera, bool value)
    IL2CPP_REGISTER_METHOD(0x00773E00, float, get_CurrentTime, )
    IL2CPP_REGISTER_METHOD(0x00773EA0, void, set_CurrentTime, float value)
    IL2CPP_REGISTER_METHOD(0x00773F50, bool, get_IsPlaying, )
    IL2CPP_REGISTER_METHOD(0x00773FF0, void, set_IsPlaying, bool value)
    IL2CPP_REGISTER_METHOD(0x007740A0, void, add_OnPreviewablesSampledCallback, app::Action_1_Single_* value)
    IL2CPP_REGISTER_METHOD(0x007741E0, void, remove_OnPreviewablesSampledCallback, app::Action_1_Single_* value)
    IL2CPP_REGISTER_METHOD(0x00774320, void, add_OnTimelineStateChangeCallback, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x00774460, void, remove_OnTimelineStateChangeCallback, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x007745A0, void, AddObserver, app::ILegacyTimelineStateObserver* observer)
    IL2CPP_REGISTER_METHOD(0x007747C0, void, RemoveObserver, app::ILegacyTimelineStateObserver* observer)
    IL2CPP_REGISTER_METHOD(0x00774880, void, OnPreviewablesSampled, float time)
    IL2CPP_REGISTER_METHOD(0x00774A20, void, OnTimelineStateChange, )
    IL2CPP_REGISTER_METHOD(0x00774B00, app::GameObject*, GetOrCreateEditorOri, )
    IL2CPP_REGISTER_METHOD(0x00774BA0, app::GameObject*, GetEditorOri, )
    IL2CPP_REGISTER_METHOD(0x00774C40, app::Animator*, GetOriAnimator, )
    IL2CPP_REGISTER_METHOD(0x00774E30, void, DestroyOri, )
    IL2CPP_REGISTER_METHOD(0x00774F90, void, CreatePuppets, )
    IL2CPP_REGISTER_METHOD(0x00775260, void, DestroyPuppets, )
    IL2CPP_REGISTER_METHOD(0x00775490, app::GenericPuppet*, GetPuppet, int32_t puppet_id, int32_t recording_id)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::LegacyTimelineState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00775780, void, cctor, )
} // namespace app::classes::Moon::Timeline::LegacyTimelineState
