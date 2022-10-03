#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GroundPatrolDirectionMode__Enum {
        namespace {
            app::GroundPatrolDirectionMode__Enum__Class* type_info_ref = nullptr;
        }
        app::GroundPatrolDirectionMode__Enum__Class** type_info = &type_info_ref;
        inline app::GroundPatrolDirectionMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::GroundPatrolDirectionMode__Enum__Class>(type_info, "Moon", "GroundPatrolDirectionMode");
        }
        inline app::GroundPatrolDirectionMode__Enum* create() {
            return il2cpp::create_object<app::GroundPatrolDirectionMode__Enum>(get_class());
        }
    } // namespace GroundPatrolDirectionMode__Enum
} // namespace app::classes::types
