#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TurtleRollBackBehaviour {
        namespace {
            app::TurtleRollBackBehaviour__Class* type_info_ref = nullptr;
        }
        app::TurtleRollBackBehaviour__Class** type_info = &type_info_ref;
        inline app::TurtleRollBackBehaviour__Class* get_class() {
            return il2cpp::get_class<app::TurtleRollBackBehaviour__Class>(type_info, "", "TurtleRollBackBehaviour");
        }
        inline app::TurtleRollBackBehaviour* create() {
            return il2cpp::create_object<app::TurtleRollBackBehaviour>(get_class());
        }
    } // namespace TurtleRollBackBehaviour
} // namespace app::classes::types
