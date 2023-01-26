#pragma once
#include <Modloader/app/structs/MonoPInvokeCallbackAttribute_2.h>
#include <Modloader/app/structs/MonoPInvokeCallbackAttribute_2__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MonoPInvokeCallbackAttribute_2 {
        inline app::MonoPInvokeCallbackAttribute_2__Class** type_info() {
            static app::MonoPInvokeCallbackAttribute_2__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MonoPInvokeCallbackAttribute_2__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MonoPInvokeCallbackAttribute_2__Class* get_class() {
            return il2cpp::get_class<app::MonoPInvokeCallbackAttribute_2__Class>(type_info(), "XGamingRuntime", "MonoPInvokeCallbackAttribute");
        }
        inline app::MonoPInvokeCallbackAttribute_2* create() {
            return il2cpp::create_object<app::MonoPInvokeCallbackAttribute_2>(get_class());
        }
    } // namespace MonoPInvokeCallbackAttribute_2
} // namespace app::classes::types
