#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AnimatorPlayState__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/IEventReciever.h>
#include <Modloader/app/structs/MarkerEntity.h>
#include <Modloader/app/structs/PlaybackStatus.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Moon::Timeline::MarkerEntity {
    IL2CPP_REGISTER_METHOD(0x002FC6D0, app::AnimatorPlayState__Enum, get_PlayState, app::MarkerEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::PlaybackStatus*, get_PlaybackStatus, app::MarkerEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BC1650, double, get_PreviewTime, app::MarkerEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BC1660, void, set_PreviewTime, app::MarkerEntity* this_ptr, double value)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, StartPlayback, app::MarkerEntity* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x01BC1670, void, StopPlayback, app::MarkerEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, PausePlayback, app::MarkerEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ResumePlayback, app::MarkerEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsReadOnly, app::MarkerEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BC1680, int32_t, get_Hash, app::MarkerEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BC16E0, app::String*, get_Name, app::MarkerEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BC1760, bool, HasFinished, app::MarkerEntity* this_ptr, int32_t event_id)
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::IEventReciever*, get_EventReciever, app::MarkerEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBA00, void, set_EventReciever, app::MarkerEntity* this_ptr, app::IEventReciever* value)
    IL2CPP_REGISTER_METHOD(0x01BC19C0, void, ctor, app::MarkerEntity* this_ptr)
} // namespace app::classes::Moon::Timeline::MarkerEntity
