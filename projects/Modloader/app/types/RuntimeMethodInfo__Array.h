#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RuntimeMethodInfo__Array {
        inline app::RuntimeMethodInfo__Array__Class** type_info = (app::RuntimeMethodInfo__Array__Class**)(modloader::win::memory::resolve_rva(0x047238D0));
        inline app::RuntimeMethodInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::RuntimeMethodInfo__Array__Class>(type_info, "System.Reflection", "RuntimeMethodInfo[]");
        }
        inline app::RuntimeMethodInfo__Array* create() {
            return il2cpp::create_object<app::RuntimeMethodInfo__Array>(get_class());
        }
    } // namespace RuntimeMethodInfo__Array
} // namespace app::classes::types
