#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::ArtOptimization::SceneOptimizationResults {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_SceneName, (app::SceneOptimizationResults * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_SceneName, (app::SceneOptimizationResults * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x00CAFFB0, void, ctor, (app::SceneOptimizationResults * this_ptr, app::String* scene_name))
    IL2CPP_REGISTER_METHOD(0x00CB0140, void, RegisterStrippedModifier, (app::SceneOptimizationResults * this_ptr, app::String* type_name))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IReadOnlyDictionary_2_System_String_System_Int32_*, get_StrippedModifiers, (app::SceneOptimizationResults * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CB0290, float, get_StrippedObjectsPercentage, (app::SceneOptimizationResults * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CB02B0, float, get_StrippedModifiersPercentage, (app::SceneOptimizationResults * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CB02D0, float, get_IgnoredObjectsPercenrage, (app::SceneOptimizationResults * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CB02F0, float, get_IgnoredModifiersPercentage, (app::SceneOptimizationResults * this_ptr))
} // namespace app::classes::Moon::ArtOptimization::SceneOptimizationResults
