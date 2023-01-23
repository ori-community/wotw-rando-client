#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FixedDurationSceneEntity_StopBehaviourType__Enum__Class.h>
#include <Modloader/app/structs/FixedDurationSceneEntity_StopBehaviourType__Enum.h>

namespace app::classes::types {
    namespace FixedDurationSceneEntity_StopBehaviourType__Enum {
        namespace {
            inline app::FixedDurationSceneEntity_StopBehaviourType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::FixedDurationSceneEntity_StopBehaviourType__Enum__Class** type_info = &type_info_ref;
        inline app::FixedDurationSceneEntity_StopBehaviourType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::FixedDurationSceneEntity_StopBehaviourType__Enum__Class>(type_info, "Moon.Timeline", "FixedDurationSceneEntity", "StopBehaviourType");
        }
        inline app::FixedDurationSceneEntity_StopBehaviourType__Enum* create() {
            return il2cpp::create_object<app::FixedDurationSceneEntity_StopBehaviourType__Enum>(get_class());
        }
    } // namespace FixedDurationSceneEntity_StopBehaviourType__Enum
} // namespace app::classes::types
