#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AnimationPlayableOutput__Boxed.h>
#include <Modloader/app/structs/PlayableOutputHandle.h>
#include <Modloader/app/structs/AnimationPlayableOutput.h>
#include <Modloader/app/structs/PlayableGraph.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Animator.h>

namespace app::classes::UnityEngine::Animations::AnimationPlayableOutput {
    IL2CPP_REGISTER_METHOD(0x00241D30, void, ctor, (app::AnimationPlayableOutput__Boxed * this_ptr, app::PlayableOutputHandle handle))
    IL2CPP_REGISTER_METHODINFO(0x04727020, AnimationPlayableOutput__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0307DEE0, app::AnimationPlayableOutput, Create, (app::PlayableGraph graph, app::String* name, app::Animator* target))
    IL2CPP_REGISTER_METHOD(0x0307E0B0, app::AnimationPlayableOutput, get_Null, ())
    IL2CPP_REGISTER_METHOD(0x001D9980, app::PlayableOutputHandle, GetHandle, (app::AnimationPlayableOutput__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00241D50, app::Animator*, GetTarget, (app::AnimationPlayableOutput__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00241DB0, void, SetTarget, (app::AnimationPlayableOutput__Boxed * this_ptr, app::Animator* value))
    IL2CPP_REGISTER_METHOD(0x0307E1E0, app::Animator*, InternalGetTarget, (app::PlayableOutputHandle * handle))
    IL2CPP_REGISTER_METHOD(0x0307E180, void, InternalSetTarget, (app::PlayableOutputHandle * handle, app::Animator* target))
} // namespace app::classes::UnityEngine::Animations::AnimationPlayableOutput
