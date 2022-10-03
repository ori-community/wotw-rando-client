#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WebConnectionGroup_ConnectionState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WebConnectionGroup_ConnectionState__Class** type_info;
        inline app::WebConnectionGroup_ConnectionState__Class* get_class() {
            return il2cpp::get_nested_class<app::WebConnectionGroup_ConnectionState__Class>(type_info, "System.Net", "WebConnectionGroup", "ConnectionState");
        }
        inline app::WebConnectionGroup_ConnectionState* create() {
            return il2cpp::create_object<app::WebConnectionGroup_ConnectionState>(get_class());
        }
        inline app::WebConnectionGroup_ConnectionState__Array* create_array(int size) {
            return il2cpp::array_new<app::WebConnectionGroup_ConnectionState__Array>(get_class(), size);
        }
    } // namespace WebConnectionGroup_ConnectionState
} // namespace app::classes::types
