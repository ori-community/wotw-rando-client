#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AnimationPostprocessGroupModifier__Array.h>
#include <Modloader/app/structs/AnimationPostprocessGroup__Array.h>
#include <Modloader/app/structs/AnimationTransition.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/HashSet_1_Moon_MoonAnimation_.h>
#include <Modloader/app/structs/IAnimation.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/MoonAnimatorDefinition.h>
#include <Modloader/app/structs/MoonAnimatorLayerName.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Moon::MoonAnimation {
    IL2CPP_REGISTER_METHOD(0x002FB930, app::MoonAnimatorDefinition*, IAnimation_get_AnimatorDefinition, app::MoonAnimation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00446960, float, IAnimation_get_AdditiveWeightMultiplier, app::MoonAnimation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B171E0, app::GameObject*, get_Rig, app::MoonAnimation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CB5CD0, app::MoonAnimatorLayerName, get_Layer, app::MoonAnimation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CB5CE0, void, set_Layer, app::MoonAnimation* this_ptr, app::MoonAnimatorLayerName value)
    IL2CPP_REGISTER_METHOD(0x006B5650, float, get_LayerBlendInDuration, app::MoonAnimation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0098F5E0, void, set_LayerBlendInDuration, app::MoonAnimation* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x004994E0, float, get_LayerBlendOutDuration, app::MoonAnimation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01045ED0, void, set_LayerBlendOutDuration, app::MoonAnimation* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x008A34C0, float, get_DefaultTransitionInDuration, app::MoonAnimation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008A34D0, void, set_DefaultTransitionInDuration, app::MoonAnimation* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::AnimationPostprocessGroup__Array*, get_DisabledPostprocessGroups, app::MoonAnimation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB70, void, set_DisabledPostprocessGroups, app::MoonAnimation* this_ptr, app::AnimationPostprocessGroup__Array* value)
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::AnimationPostprocessGroupModifier__Array*, get_PostprocessGroupModifiers, app::MoonAnimation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB90, void, set_PostprocessGroupModifiers, app::MoonAnimation* this_ptr, app::AnimationPostprocessGroupModifier__Array* value)
    IL2CPP_REGISTER_METHOD(0x00BAB250, app::String*, get_Name, app::MoonAnimation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0051DB40, bool, get_UseDefaultTransitionIn, app::MoonAnimation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBC0, app::AnimationTransition*, get_DefaultTransitionIn, app::MoonAnimation* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01B172B0,
        app::AnimationTransition*,
        GetTransition,
        app::MoonAnimation* this_ptr,
        app::IAnimation* target_animation,
        float current_normalized_time
    )
    IL2CPP_REGISTER_METHOD(0x01B17510, float, GetDuration, app::MoonAnimation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B175D0, float, GetFrameRate, app::MoonAnimation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B17690, void, CollectAnimations, app::MoonAnimation* this_ptr, app::HashSet_1_Moon_MoonAnimation_* animations)
    IL2CPP_REGISTER_METHOD(0x01B17740, void, ctor, app::MoonAnimation* this_ptr)
} // namespace app::classes::Moon::MoonAnimation
