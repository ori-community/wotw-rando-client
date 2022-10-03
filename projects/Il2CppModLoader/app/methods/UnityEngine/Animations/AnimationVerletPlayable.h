#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UnityEngine::Animations::AnimationVerletPlayable {
    IL2CPP_REGISTER_METHOD(0x00241FC0, void, ctor, (app::AnimationVerletPlayable__Boxed * this_ptr, app::PlayableHandle handle))
    IL2CPP_REGISTER_METHODINFO(0x0477F550, AnimationVerletPlayable__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00241FE0, void, set_configuration, (app::AnimationVerletPlayable__Boxed * this_ptr, app::AnimationVerletPlayableConfiguration value))
    IL2CPP_REGISTER_METHOD(0x0307E820, app::AnimationVerletPlayable, Create, (app::PlayableGraph graph))
    IL2CPP_REGISTER_METHOD(0x0307E990, app::PlayableHandle, CreateHandle, (app::PlayableGraph graph))
    IL2CPP_REGISTER_METHOD(0x001D9980, app::PlayableHandle, GetHandle, (app::AnimationVerletPlayable__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0307C600, app::Playable, op_Implicit, (app::AnimationVerletPlayable playable))
    IL2CPP_REGISTER_METHOD(0x00242040, bool, Equals, (app::AnimationVerletPlayable__Boxed * this_ptr, app::AnimationVerletPlayable other))
    IL2CPP_REGISTER_METHOD(0x002421A0, void, AddChain, (app::AnimationVerletPlayable__Boxed * this_ptr, app::Transform__Array* transforms, app::AnimationVerletPlayableParametersAsset* parameters_asset))
    IL2CPP_REGISTER_METHOD(0x00241FE0, void, SetConfiguration, (app::AnimationVerletPlayable__Boxed * this_ptr, app::AnimationVerletPlayableConfiguration config))
    IL2CPP_REGISTER_METHOD(0x002421B0, int32_t, BeginGroup, (app::AnimationVerletPlayable__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00242210, void, EndGroup, (app::AnimationVerletPlayable__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00242270, void, SetGroupWeight, (app::AnimationVerletPlayable__Boxed * this_ptr, int32_t group_index, float weight))
    IL2CPP_REGISTER_METHOD(0x0307EC00, bool, CreateHandleInternal, (app::PlayableGraph graph, app::PlayableHandle* handle))
    IL2CPP_REGISTER_METHOD(0x0307EAD0, void, AddChainInternal, (app::PlayableHandle * handle, app::Transform__Array* transforms, app::AnimationVerletPlayableParametersAsset* parameters_asset))
    IL2CPP_REGISTER_METHOD(0x0307EC60, void, SetConfigurationInternal, (app::PlayableHandle * handle, app::AnimationVerletPlayableConfiguration config))
    IL2CPP_REGISTER_METHOD(0x0307ECC0, int32_t, BeginGroupInternal, (app::PlayableHandle * handle))
    IL2CPP_REGISTER_METHOD(0x0307EB40, void, EndGroupInternal, (app::PlayableHandle * handle))
    IL2CPP_REGISTER_METHOD(0x0307EB90, void, SetGroupWeightInternal, (app::PlayableHandle * handle, int32_t group_index, float weight))
    IL2CPP_REGISTER_METHOD(0x0307ED10, bool, CreateHandleInternal_Injected, (app::PlayableGraph * graph, app::PlayableHandle* handle))
    IL2CPP_REGISTER_METHOD(0x0307ED70, void, SetConfigurationInternal_Injected, (app::PlayableHandle * handle, app::AnimationVerletPlayableConfiguration* config))
} // namespace app::classes::UnityEngine::Animations::AnimationVerletPlayable
