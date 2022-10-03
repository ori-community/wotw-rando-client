#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PrimitiveArray {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PrimitiveArray__Class** type_info;
        inline app::PrimitiveArray__Class* get_class() {
            return il2cpp::get_class<app::PrimitiveArray__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "PrimitiveArray");
        }
        inline app::PrimitiveArray* create() {
            return il2cpp::create_object<app::PrimitiveArray>(get_class());
        }
    } // namespace PrimitiveArray
} // namespace app::classes::types
