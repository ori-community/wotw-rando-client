#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityEngine::Experimental::Animations::AnimatorJobExtensions {
    IL2CPP_REGISTER_METHOD(0x03086E30, app::TransformStreamHandle, BindStreamTransform, (app::Animator * animator, app::Transform* transform))
    IL2CPP_REGISTER_METHOD(0x03086EC0, void, InternalBindStreamTransform, (app::Animator * animator, app::Transform* transform, app::TransformStreamHandle* transform_stream_handle))
} // namespace app::classes::UnityEngine::Experimental::Animations::AnimatorJobExtensions
