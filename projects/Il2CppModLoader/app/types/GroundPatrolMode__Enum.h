#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GroundPatrolMode__Enum {
        namespace {
            app::GroundPatrolMode__Enum__Class* type_info_ref = nullptr;
        }
        app::GroundPatrolMode__Enum__Class** type_info = &type_info_ref;
        inline app::GroundPatrolMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::GroundPatrolMode__Enum__Class>(type_info, "Moon", "GroundPatrolMode");
        }
        inline app::GroundPatrolMode__Enum* create() {
            return il2cpp::create_object<app::GroundPatrolMode__Enum>(get_class());
        }
    } // namespace GroundPatrolMode__Enum
} // namespace app::classes::types
