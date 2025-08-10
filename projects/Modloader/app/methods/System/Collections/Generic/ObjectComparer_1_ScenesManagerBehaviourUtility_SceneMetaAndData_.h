#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ObjectComparer_1_ScenesManagerBehaviourUtility_SceneMetaAndData_.h>
#include <Modloader/app/structs/ScenesManagerBehaviourUtility_SceneMetaAndData.h>

namespace app::classes::System::Collections::Generic::ObjectComparer_1_ScenesManagerBehaviourUtility_SceneMetaAndData_ {
    IL2CPP_REGISTER_METHOD(
        0x01CC8AE0,
        int32_t,
        Compare,
        app::ObjectComparer_1_ScenesManagerBehaviourUtility_SceneMetaAndData_* this_ptr,
        app::ScenesManagerBehaviourUtility_SceneMetaAndData x,
        app::ScenesManagerBehaviourUtility_SceneMetaAndData y
    )
    IL2CPP_REGISTER_METHOD(0x01CC3E60, bool, Equals, app::ObjectComparer_1_ScenesManagerBehaviourUtility_SceneMetaAndData_* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode, app::ObjectComparer_1_ScenesManagerBehaviourUtility_SceneMetaAndData_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019F8810, void, ctor, app::ObjectComparer_1_ScenesManagerBehaviourUtility_SceneMetaAndData_* this_ptr)
} // namespace app::classes::System::Collections::Generic::ObjectComparer_1_ScenesManagerBehaviourUtility_SceneMetaAndData_
