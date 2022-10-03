#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IntSizedArray {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IntSizedArray__Class** type_info;
        inline app::IntSizedArray__Class* get_class() {
            return il2cpp::get_class<app::IntSizedArray__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "IntSizedArray");
        }
        inline app::IntSizedArray* create() {
            return il2cpp::create_object<app::IntSizedArray>(get_class());
        }
    } // namespace IntSizedArray
} // namespace app::classes::types
