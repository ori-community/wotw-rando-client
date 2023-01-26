#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourTreeVirtualAnimator.h>
#include <Modloader/app/structs/AnimatorPlayState__Enum.h>
#include <Modloader/app/structs/BehaviourTree.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/IEventReciever.h>
#include <Modloader/app/structs/Nullable_1_Single_.h>
#include <Modloader/app/structs/PlaybackStatus.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::BehaviourTreeVirtualAnimator {
    IL2CPP_REGISTER_METHOD(0x00F9DBA0, int32_t, get_Hash, (app::BehaviourTreeVirtualAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F9DBC0, app::String*, get_Name, (app::BehaviourTreeVirtualAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Nullable_1_Single_, get_CustomStart, (app::BehaviourTreeVirtualAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_CustomStart, (app::BehaviourTreeVirtualAnimator * this_ptr, app::Nullable_1_Single_ value))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Nullable_1_Single_, get_CustomEnd, (app::BehaviourTreeVirtualAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_CustomEnd, (app::BehaviourTreeVirtualAnimator * this_ptr, app::Nullable_1_Single_ value))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::BehaviourTree*, get_BehaviourTree, (app::BehaviourTreeVirtualAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_BehaviourTree, (app::BehaviourTreeVirtualAnimator * this_ptr, app::BehaviourTree* value))
    IL2CPP_REGISTER_METHOD(0x00F9DC40, void, ctor, (app::BehaviourTreeVirtualAnimator * this_ptr, app::BehaviourTree* tree))
    IL2CPP_REGISTER_METHOD(0x00420230, app::AnimatorPlayState__Enum, get_PlayState, (app::BehaviourTreeVirtualAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::PlaybackStatus*, get_PlaybackStatus, (app::BehaviourTreeVirtualAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F9DD90, void, StartPlayback, (app::BehaviourTreeVirtualAnimator * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00F9DDE0, void, StopPlayback, (app::BehaviourTreeVirtualAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F9DE30, void, PausePlayback, (app::BehaviourTreeVirtualAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F9DE80, void, ResumePlayback, (app::BehaviourTreeVirtualAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsReadOnly, (app::BehaviourTreeVirtualAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F9DED0, app::IEventReciever*, get_EventReciever, (app::BehaviourTreeVirtualAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F9DF20, void, set_EventReciever, (app::BehaviourTreeVirtualAnimator * this_ptr, app::IEventReciever* value))
} // namespace app::classes::BehaviourTreeVirtualAnimator
