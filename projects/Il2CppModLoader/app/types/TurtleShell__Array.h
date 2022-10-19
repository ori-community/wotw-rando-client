#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TurtleShell__Array {
        namespace {
            inline app::TurtleShell__Array__Class* type_info_ref = nullptr;
        }
        inline app::TurtleShell__Array__Class** type_info = &type_info_ref;
        inline app::TurtleShell__Array__Class* get_class() {
            return il2cpp::get_class<app::TurtleShell__Array__Class>(type_info, "", "TurtleShell[]");
        }
        inline app::TurtleShell__Array* create() {
            return il2cpp::create_object<app::TurtleShell__Array>(get_class());
        }
    } // namespace TurtleShell__Array
} // namespace app::classes::types
