#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RuntimeLabel__Array {
        inline app::RuntimeLabel__Array__Class** type_info = (app::RuntimeLabel__Array__Class**)(modloader::win::memory::resolve_rva(0x0475F670));
        inline app::RuntimeLabel__Array__Class* get_class() {
            return il2cpp::get_class<app::RuntimeLabel__Array__Class>(type_info, "System.Linq.Expressions.Interpreter", "RuntimeLabel[]");
        }
        inline app::RuntimeLabel__Array* create() {
            return il2cpp::create_object<app::RuntimeLabel__Array>(get_class());
        }
    } // namespace RuntimeLabel__Array
} // namespace app::classes::types
