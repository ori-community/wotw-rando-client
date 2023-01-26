#pragma once
#include <Modloader/app/structs/RuntimeLabel__Array.h>
#include <Modloader/app/structs/RuntimeLabel__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RuntimeLabel__Array {
        inline app::RuntimeLabel__Array__Class** type_info() {
            static app::RuntimeLabel__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RuntimeLabel__Array__Class**)(modloader::win::memory::resolve_rva(0x0475F670));
            }
            return cache;
        }
        inline app::RuntimeLabel__Array__Class* get_class() {
            return il2cpp::get_class<app::RuntimeLabel__Array__Class>(type_info(), "System.Linq.Expressions.Interpreter", "RuntimeLabel[]");
        }
        inline app::RuntimeLabel__Array* create() {
            return il2cpp::create_object<app::RuntimeLabel__Array>(get_class());
        }
    } // namespace RuntimeLabel__Array
} // namespace app::classes::types
