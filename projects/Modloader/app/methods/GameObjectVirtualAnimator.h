#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GameObjectVirtualAnimator.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/VirtualTimelineRepresentationGroup__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/AnimatorPlayState__Enum.h>
#include <Modloader/app/structs/PlaybackStatus.h>
#include <Modloader/app/structs/IEventReciever.h>

namespace app::classes::GameObjectVirtualAnimator {
    IL2CPP_REGISTER_METHOD(0x00F9DBA0, int32_t, get_Hash, (app::GameObjectVirtualAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BA47E0, app::String*, get_Name, (app::GameObjectVirtualAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::GameObject*, get_Target, (app::GameObjectVirtualAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::GameObject*, get_ExternalTarget, (app::GameObjectVirtualAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FD1D0, app::VirtualTimelineRepresentationGroup__Enum, get_Group, (app::GameObjectVirtualAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FD1E0, void, set_Group, (app::GameObjectVirtualAnimator * this_ptr, app::VirtualTimelineRepresentationGroup__Enum value))
    IL2CPP_REGISTER_METHOD(0x01BA4820, void, ctor_1, (app::GameObjectVirtualAnimator * this_ptr, app::GameObject* target, app::String* custom_name))
    IL2CPP_REGISTER_METHOD(0x01BA4980, void, ctor_2, (app::GameObjectVirtualAnimator * this_ptr, app::GameObject* target))
    IL2CPP_REGISTER_METHOD(0x01BA4AD0, void, StartPlayback, (app::GameObjectVirtualAnimator * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHODINFO(0x04747B80, GameObjectVirtualAnimator_StartPlayback__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01BA4B20, void, StopPlayback, (app::GameObjectVirtualAnimator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04717A88, GameObjectVirtualAnimator_StopPlayback__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01BA4B70, void, PausePlayback, (app::GameObjectVirtualAnimator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478FC98, GameObjectVirtualAnimator_PausePlayback__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01BA4BC0, void, ResumePlayback, (app::GameObjectVirtualAnimator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04764CE0, GameObjectVirtualAnimator_ResumePlayback__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsReadOnly, (app::GameObjectVirtualAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00529E80, app::AnimatorPlayState__Enum, get_PlayState, (app::GameObjectVirtualAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::PlaybackStatus*, get_PlaybackStatus, (app::GameObjectVirtualAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BA4C10, app::IEventReciever*, get_EventReciever, (app::GameObjectVirtualAnimator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04770D08, GameObjectVirtualAnimator_get_EventReciever__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01BA4C60, void, set_EventReciever, (app::GameObjectVirtualAnimator * this_ptr, app::IEventReciever* value))
    IL2CPP_REGISTER_METHODINFO(0x04785BF0, GameObjectVirtualAnimator_set_EventReciever__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01BA4CB0, void, Reset, (app::GameObjectVirtualAnimator * this_ptr, app::IContext* context))
} // namespace app::classes::GameObjectVirtualAnimator
