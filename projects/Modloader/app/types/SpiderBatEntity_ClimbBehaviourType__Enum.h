#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpiderBatEntity_ClimbBehaviourType__Enum__Class.h>
#include <Modloader/app/structs/SpiderBatEntity_ClimbBehaviourType__Enum.h>

namespace app::classes::types {
    namespace SpiderBatEntity_ClimbBehaviourType__Enum {
        namespace {
            inline app::SpiderBatEntity_ClimbBehaviourType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::SpiderBatEntity_ClimbBehaviourType__Enum__Class** type_info = &type_info_ref;
        inline app::SpiderBatEntity_ClimbBehaviourType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SpiderBatEntity_ClimbBehaviourType__Enum__Class>(type_info, "", "SpiderBatEntity", "ClimbBehaviourType");
        }
        inline app::SpiderBatEntity_ClimbBehaviourType__Enum* create() {
            return il2cpp::create_object<app::SpiderBatEntity_ClimbBehaviourType__Enum>(get_class());
        }
    } // namespace SpiderBatEntity_ClimbBehaviourType__Enum
} // namespace app::classes::types
