#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MonoPInvokeCallbackAttribute_1 {
        namespace {
            app::MonoPInvokeCallbackAttribute_1__Class* type_info_ref = nullptr;
        }
        app::MonoPInvokeCallbackAttribute_1__Class** type_info = &type_info_ref;
        inline app::MonoPInvokeCallbackAttribute_1__Class* get_class() {
            return il2cpp::get_class<app::MonoPInvokeCallbackAttribute_1__Class>(type_info, "AOT", "MonoPInvokeCallbackAttribute");
        }
        inline app::MonoPInvokeCallbackAttribute_1* create() {
            return il2cpp::create_object<app::MonoPInvokeCallbackAttribute_1>(get_class());
        }
    } // namespace MonoPInvokeCallbackAttribute_1
} // namespace app::classes::types
