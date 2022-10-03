#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WebConnectionGroup_ConnectionState__Array {
        namespace {
            app::WebConnectionGroup_ConnectionState__Array__Class* type_info_ref = nullptr;
        }
        app::WebConnectionGroup_ConnectionState__Array__Class** type_info = &type_info_ref;
        inline app::WebConnectionGroup_ConnectionState__Array__Class* get_class() {
            return il2cpp::get_class<app::WebConnectionGroup_ConnectionState__Array__Class>(type_info, "System.Net", "WebConnectionGroup+ConnectionState[]");
        }
        inline app::WebConnectionGroup_ConnectionState__Array* create() {
            return il2cpp::create_object<app::WebConnectionGroup_ConnectionState__Array>(get_class());
        }
    } // namespace WebConnectionGroup_ConnectionState__Array
} // namespace app::classes::types
