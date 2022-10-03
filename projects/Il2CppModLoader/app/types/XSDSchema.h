#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XSDSchema {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XSDSchema__Class** type_info;
        inline app::XSDSchema__Class* get_class() {
            return il2cpp::get_class<app::XSDSchema__Class>(type_info, "System.Data", "XSDSchema");
        }
        inline app::XSDSchema* create() {
            return il2cpp::create_object<app::XSDSchema>(get_class());
        }
    } // namespace XSDSchema
} // namespace app::classes::types
