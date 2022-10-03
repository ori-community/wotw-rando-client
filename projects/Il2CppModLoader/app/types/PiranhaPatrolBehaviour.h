#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PiranhaPatrolBehaviour {
        namespace {
            app::PiranhaPatrolBehaviour__Class* type_info_ref = nullptr;
        }
        app::PiranhaPatrolBehaviour__Class** type_info = &type_info_ref;
        inline app::PiranhaPatrolBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PiranhaPatrolBehaviour__Class>(type_info, "", "PiranhaPatrolBehaviour");
        }
        inline app::PiranhaPatrolBehaviour* create() {
            return il2cpp::create_object<app::PiranhaPatrolBehaviour>(get_class());
        }
    } // namespace PiranhaPatrolBehaviour
} // namespace app::classes::types
