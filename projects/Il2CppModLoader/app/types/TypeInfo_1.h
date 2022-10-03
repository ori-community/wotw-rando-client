#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TypeInfo_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TypeInfo_1__Class** type_info;
        inline app::TypeInfo_1__Class* get_class() {
            return il2cpp::get_class<app::TypeInfo_1__Class>(type_info, "System.Runtime.Remoting", "TypeInfo");
        }
        inline app::TypeInfo_1* create() {
            return il2cpp::create_object<app::TypeInfo_1>(get_class());
        }
    } // namespace TypeInfo_1
} // namespace app::classes::types
