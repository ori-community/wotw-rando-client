#pragma once
#include <Modloader/app/structs/GroundPatrolMode__Enum.h>
#include <Modloader/app/structs/GroundPatrolMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GroundPatrolMode__Enum {
        inline app::GroundPatrolMode__Enum__Class** type_info() {
            static app::GroundPatrolMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GroundPatrolMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GroundPatrolMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::GroundPatrolMode__Enum__Class>(type_info(), "Moon", "GroundPatrolMode");
        }
        inline app::GroundPatrolMode__Enum* create() {
            return il2cpp::create_object<app::GroundPatrolMode__Enum>(get_class());
        }
    } // namespace GroundPatrolMode__Enum
} // namespace app::classes::types
