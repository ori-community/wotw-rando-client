#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MonoPInvokeCallbackAttribute_2 {
        namespace {
            app::MonoPInvokeCallbackAttribute_2__Class* type_info_ref = nullptr;
        }
        app::MonoPInvokeCallbackAttribute_2__Class** type_info = &type_info_ref;
        inline app::MonoPInvokeCallbackAttribute_2__Class* get_class() {
            return il2cpp::get_class<app::MonoPInvokeCallbackAttribute_2__Class>(type_info, "XGamingRuntime", "MonoPInvokeCallbackAttribute");
        }
        inline app::MonoPInvokeCallbackAttribute_2* create() {
            return il2cpp::create_object<app::MonoPInvokeCallbackAttribute_2>(get_class());
        }
    } // namespace MonoPInvokeCallbackAttribute_2
} // namespace app::classes::types
