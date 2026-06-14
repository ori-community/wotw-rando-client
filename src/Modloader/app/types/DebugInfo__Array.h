#pragma once
#include <Modloader/app/structs/DebugInfo__Array.h>
#include <Modloader/app/structs/DebugInfo__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DebugInfo__Array {
        inline app::DebugInfo__Array__Class** type_info() {
            static app::DebugInfo__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DebugInfo__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DebugInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::DebugInfo__Array__Class>(type_info(), "System.Linq.Expressions.Interpreter", "DebugInfo[]");
        }
        inline app::DebugInfo__Array* create() {
            return il2cpp::create_object<app::DebugInfo__Array>(get_class());
        }
    } // namespace DebugInfo__Array
} // namespace app::classes::types
