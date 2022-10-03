#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DebugInfo__Array {
        namespace {
            app::DebugInfo__Array__Class* type_info_ref = nullptr;
        }
        app::DebugInfo__Array__Class** type_info = &type_info_ref;
        inline app::DebugInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::DebugInfo__Array__Class>(type_info, "System.Linq.Expressions.Interpreter", "DebugInfo[]");
        }
        inline app::DebugInfo__Array* create() {
            return il2cpp::create_object<app::DebugInfo__Array>(get_class());
        }
    } // namespace DebugInfo__Array
} // namespace app::classes::types
