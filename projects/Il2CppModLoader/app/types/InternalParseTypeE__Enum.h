#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InternalParseTypeE__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InternalParseTypeE__Enum__Class** type_info;
        inline app::InternalParseTypeE__Enum__Class* get_class() {
            return il2cpp::get_class<app::InternalParseTypeE__Enum__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "InternalParseTypeE");
        }
        inline app::InternalParseTypeE__Enum* create() {
            return il2cpp::create_object<app::InternalParseTypeE__Enum>(get_class());
        }
    } // namespace InternalParseTypeE__Enum
} // namespace app::classes::types
