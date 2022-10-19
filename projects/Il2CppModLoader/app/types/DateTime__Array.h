#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DateTime__Array {
        inline app::DateTime__Array__Class** type_info = (app::DateTime__Array__Class**)(modloader::win::memory::resolve_rva(0x04713380));
        inline app::DateTime__Array__Class* get_class() {
            return il2cpp::get_class<app::DateTime__Array__Class>(type_info, "System", "DateTime[]");
        }
        inline app::DateTime__Array* create() {
            return il2cpp::create_object<app::DateTime__Array>(get_class());
        }
    } // namespace DateTime__Array
} // namespace app::classes::types
