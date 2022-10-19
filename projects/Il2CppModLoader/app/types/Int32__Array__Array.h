#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Int32__Array__Array {
        inline app::Int32__Array__Array__Class** type_info = (app::Int32__Array__Array__Class**)(modloader::win::memory::resolve_rva(0x04788288));
        inline app::Int32__Array__Array__Class* get_class() {
            return il2cpp::get_class<app::Int32__Array__Array__Class>(type_info, "System", "Int32[][]");
        }
        inline app::Int32__Array__Array* create() {
            return il2cpp::create_object<app::Int32__Array__Array>(get_class());
        }
    } // namespace Int32__Array__Array
} // namespace app::classes::types
