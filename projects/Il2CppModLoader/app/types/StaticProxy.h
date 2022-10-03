#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StaticProxy {
        namespace {
            app::StaticProxy__Class* type_info_ref = nullptr;
        }
        app::StaticProxy__Class** type_info = &type_info_ref;
        inline app::StaticProxy__Class* get_class() {
            return il2cpp::get_class<app::StaticProxy__Class>(type_info, "System.Net", "StaticProxy");
        }
        inline app::StaticProxy* create() {
            return il2cpp::create_object<app::StaticProxy>(get_class());
        }
    } // namespace StaticProxy
} // namespace app::classes::types
