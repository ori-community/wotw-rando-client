#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TurtleScreamBehaviour {
        namespace {
            app::TurtleScreamBehaviour__Class* type_info_ref = nullptr;
        }
        app::TurtleScreamBehaviour__Class** type_info = &type_info_ref;
        inline app::TurtleScreamBehaviour__Class* get_class() {
            return il2cpp::get_class<app::TurtleScreamBehaviour__Class>(type_info, "", "TurtleScreamBehaviour");
        }
        inline app::TurtleScreamBehaviour* create() {
            return il2cpp::create_object<app::TurtleScreamBehaviour>(get_class());
        }
    } // namespace TurtleScreamBehaviour
} // namespace app::classes::types
