#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/YogaNode.h>
#include <Modloader/app/structs/YogaSize.h>
#include <Modloader/app/structs/YogaMeasureMode__Enum.h>
#include <Modloader/app/structs/IEnumerator_1_UnityEngine_Yoga_YogaNode_.h>
#include <Modloader/app/structs/IEnumerator.h>

namespace app::classes::UnityEngine::Yoga::YogaNode {
    IL2CPP_REGISTER_METHOD(0x031BE740, void, Finalize, (app::YogaNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031BE860, app::YogaSize, MeasureInternal, (app::YogaNode * node, float width, app::YogaMeasureMode__Enum width_mode, float height, app::YogaMeasureMode__Enum height_mode))
    IL2CPP_REGISTER_METHODINFO(0x0477BFE8, YogaNode_MeasureInternal__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x031BE970, float, BaselineInternal, (app::YogaNode * node, float width, float height))
    IL2CPP_REGISTER_METHODINFO(0x04777158, YogaNode_BaselineInternal__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x031BEA60, app::IEnumerator_1_UnityEngine_Yoga_YogaNode_*, GetEnumerator, (app::YogaNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031BEB90, app::IEnumerator*, IEnumerable_GetEnumerator, (app::YogaNode * this_ptr))
} // namespace app::classes::UnityEngine::Yoga::YogaNode
