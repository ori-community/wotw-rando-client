#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BitArray {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BitArray__Class** type_info;
        inline app::BitArray__Class* get_class() {
            return il2cpp::get_class<app::BitArray__Class>(type_info, "System.Collections", "BitArray");
        }
        inline app::BitArray* create() {
            return il2cpp::create_object<app::BitArray>(get_class());
        }
    } // namespace BitArray
} // namespace app::classes::types
