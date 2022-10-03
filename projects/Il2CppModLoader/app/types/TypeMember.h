#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TypeMember {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TypeMember__Class** type_info;
        inline app::TypeMember__Class* get_class() {
            return il2cpp::get_class<app::TypeMember__Class>(type_info, "System.Xml.Serialization", "TypeMember");
        }
        inline app::TypeMember* create() {
            return il2cpp::create_object<app::TypeMember>(get_class());
        }
    } // namespace TypeMember
} // namespace app::classes::types
