#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InternalPrimitiveTypeE__Enum__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InternalPrimitiveTypeE__Enum__Array__Class** type_info;
        inline app::InternalPrimitiveTypeE__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::InternalPrimitiveTypeE__Enum__Array__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "InternalPrimitiveTypeE[]");
        }
        inline app::InternalPrimitiveTypeE__Enum__Array* create() {
            return il2cpp::create_object<app::InternalPrimitiveTypeE__Enum__Array>(get_class());
        }
    } // namespace InternalPrimitiveTypeE__Enum__Array
} // namespace app::classes::types
