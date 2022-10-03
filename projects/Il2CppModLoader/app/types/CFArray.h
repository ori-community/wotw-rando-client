#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CFArray {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CFArray__Class** type_info;
        inline app::CFArray__Class* get_class() {
            return il2cpp::get_class<app::CFArray__Class>(type_info, "Mono.Net", "CFArray");
        }
        inline app::CFArray* create() {
            return il2cpp::create_object<app::CFArray>(get_class());
        }
    } // namespace CFArray
} // namespace app::classes::types
