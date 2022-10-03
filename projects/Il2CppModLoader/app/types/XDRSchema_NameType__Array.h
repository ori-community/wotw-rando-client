#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XDRSchema_NameType__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XDRSchema_NameType__Array__Class** type_info;
        inline app::XDRSchema_NameType__Array__Class* get_class() {
            return il2cpp::get_class<app::XDRSchema_NameType__Array__Class>(type_info, "System.Data", "XDRSchema+NameType[]");
        }
        inline app::XDRSchema_NameType__Array* create() {
            return il2cpp::create_object<app::XDRSchema_NameType__Array>(get_class());
        }
    } // namespace XDRSchema_NameType__Array
} // namespace app::classes::types
