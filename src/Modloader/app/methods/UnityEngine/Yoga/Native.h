#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/YogaMeasureMode__Enum.h>
#include <Modloader/app/structs/YogaNode.h>

namespace app::classes::UnityEngine::Yoga::Native {
    IL2CPP_REGISTER_METHOD(0x031BE3F0, void, YGNodeFree, void* yg_node)
    IL2CPP_REGISTER_METHOD(0x031BE4B0, void, YGNodeFreeInternal, void* yg_node)
    IL2CPP_REGISTER_METHOD(
        0x031BE500,
        void,
        YGNodeMeasureInvoke,
        app::YogaNode* node,
        float width,
        app::YogaMeasureMode__Enum width_mode,
        float height,
        app::YogaMeasureMode__Enum height_mode,
        void* return_value_address
    )
    IL2CPP_REGISTER_METHOD(0x031BE640, void, YGNodeBaselineInvoke, app::YogaNode* node, float width, float height, void* return_value_address)
} // namespace app::classes::UnityEngine::Yoga::Native
