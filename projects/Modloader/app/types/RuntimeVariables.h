#pragma once
#include <Modloader/app/structs/RuntimeVariables.h>
#include <Modloader/app/structs/RuntimeVariables__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RuntimeVariables {
        inline app::RuntimeVariables__Class** type_info() {
            static app::RuntimeVariables__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RuntimeVariables__Class**)(modloader::win::memory::resolve_rva(0x0474F1F8));
            }
            return cache;
        }
        inline app::RuntimeVariables__Class* get_class() {
            return il2cpp::get_class<app::RuntimeVariables__Class>(type_info(), "System.Linq.Expressions.Interpreter", "RuntimeVariables");
        }
        inline app::RuntimeVariables* create() {
            return il2cpp::create_object<app::RuntimeVariables>(get_class());
        }
    } // namespace RuntimeVariables
} // namespace app::classes::types
