#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InternalObjectTypeE__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InternalObjectTypeE__Enum__Class** type_info;
        inline app::InternalObjectTypeE__Enum__Class* get_class() {
            return il2cpp::get_class<app::InternalObjectTypeE__Enum__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "InternalObjectTypeE");
        }
        inline app::InternalObjectTypeE__Enum* create() {
            return il2cpp::create_object<app::InternalObjectTypeE__Enum>(get_class());
        }
    } // namespace InternalObjectTypeE__Enum
} // namespace app::classes::types
