#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ScenesManagerBehaviourUtility_SceneMetaAndData.h>
#include <Modloader/app/structs/ScenesManagerBehaviourUtility_SceneMetaAndData__Boxed.h>

namespace app::classes::ScenesManagerBehaviourUtility_SceneMetaAndData {
    IL2CPP_REGISTER_METHOD(0x001240C0, int32_t, GetHashCode, app::ScenesManagerBehaviourUtility_SceneMetaAndData__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x001240F0,
        bool,
        Equals,
        app::ScenesManagerBehaviourUtility_SceneMetaAndData__Boxed* this_ptr,
        app::ScenesManagerBehaviourUtility_SceneMetaAndData other
    )
} // namespace app::classes::ScenesManagerBehaviourUtility_SceneMetaAndData
