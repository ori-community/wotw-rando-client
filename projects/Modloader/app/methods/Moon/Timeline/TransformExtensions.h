#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::Timeline::TransformExtensions {
    IL2CPP_REGISTER_METHOD(0x0157F160, app::Object*, GetCommonParent_1, (app::Object * left, app::Object* right))
    IL2CPP_REGISTER_METHOD(0x01B347B0, bool, GetCommonParentRecursive, (app::Object * left, app::Object* right, app::HashSet_1_System_Object_** found_parents, app::Object** found_parent))
    IL2CPP_REGISTER_METHOD(0x0157F160, app::MoonTimeline*, GetCommonParent_2, (app::MoonTimeline * left, app::MoonTimeline* right))
    IL2CPP_REGISTER_METHODINFO(0x0476BAC0, TransformExtensions_1_GetCommonParent_1__MethodInfo)
} // namespace app::classes::Moon::Timeline::TransformExtensions
