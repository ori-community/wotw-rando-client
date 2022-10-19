#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TokenHashValue__Array {
        inline app::TokenHashValue__Array__Class** type_info = (app::TokenHashValue__Array__Class**)(modloader::win::memory::resolve_rva(0x0473EF50));
        inline app::TokenHashValue__Array__Class* get_class() {
            return il2cpp::get_class<app::TokenHashValue__Array__Class>(type_info, "System.Globalization", "TokenHashValue[]");
        }
        inline app::TokenHashValue__Array* create() {
            return il2cpp::create_object<app::TokenHashValue__Array>(get_class());
        }
    } // namespace TokenHashValue__Array
} // namespace app::classes::types
