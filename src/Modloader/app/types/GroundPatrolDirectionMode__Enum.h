#pragma once
#include <Modloader/app/structs/GroundPatrolDirectionMode__Enum.h>
#include <Modloader/app/structs/GroundPatrolDirectionMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GroundPatrolDirectionMode__Enum {
        inline app::GroundPatrolDirectionMode__Enum__Class** type_info() {
            static app::GroundPatrolDirectionMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GroundPatrolDirectionMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GroundPatrolDirectionMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::GroundPatrolDirectionMode__Enum__Class>(type_info(), "Moon", "GroundPatrolDirectionMode");
        }
        inline app::GroundPatrolDirectionMode__Enum* create() {
            return il2cpp::create_object<app::GroundPatrolDirectionMode__Enum>(get_class());
        }
    } // namespace GroundPatrolDirectionMode__Enum
} // namespace app::classes::types
