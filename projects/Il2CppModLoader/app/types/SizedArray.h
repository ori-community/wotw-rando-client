#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SizedArray {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SizedArray__Class** type_info;
        inline app::SizedArray__Class* get_class() {
            return il2cpp::get_class<app::SizedArray__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "SizedArray");
        }
        inline app::SizedArray* create() {
            return il2cpp::create_object<app::SizedArray>(get_class());
        }
    } // namespace SizedArray
} // namespace app::classes::types
