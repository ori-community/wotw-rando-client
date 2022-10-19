#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Int16__Array {
        inline app::Int16__Array__Class** type_info = (app::Int16__Array__Class**)(modloader::win::memory::resolve_rva(0x04767BB0));
        inline app::Int16__Array__Class* get_class() {
            return il2cpp::get_class<app::Int16__Array__Class>(type_info, "System", "Int16[]");
        }
        inline app::Int16__Array* create() {
            return il2cpp::create_object<app::Int16__Array>(get_class());
        }
    } // namespace Int16__Array
} // namespace app::classes::types
