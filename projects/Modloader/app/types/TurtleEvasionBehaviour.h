#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TurtleEvasionBehaviour {
        namespace {
            inline app::TurtleEvasionBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::TurtleEvasionBehaviour__Class** type_info = &type_info_ref;
        inline app::TurtleEvasionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::TurtleEvasionBehaviour__Class>(type_info, "", "TurtleEvasionBehaviour");
        }
        inline app::TurtleEvasionBehaviour* create() {
            return il2cpp::create_object<app::TurtleEvasionBehaviour>(get_class());
        }
    } // namespace TurtleEvasionBehaviour
} // namespace app::classes::types
