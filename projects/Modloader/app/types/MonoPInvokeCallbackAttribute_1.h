#pragma once
#include <Modloader/app/structs/MonoPInvokeCallbackAttribute_1.h>
#include <Modloader/app/structs/MonoPInvokeCallbackAttribute_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MonoPInvokeCallbackAttribute_1 {
        inline app::MonoPInvokeCallbackAttribute_1__Class** type_info() {
            static app::MonoPInvokeCallbackAttribute_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MonoPInvokeCallbackAttribute_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MonoPInvokeCallbackAttribute_1__Class* get_class() {
            return il2cpp::get_class<app::MonoPInvokeCallbackAttribute_1__Class>(type_info(), "AOT", "MonoPInvokeCallbackAttribute");
        }
        inline app::MonoPInvokeCallbackAttribute_1* create() {
            return il2cpp::create_object<app::MonoPInvokeCallbackAttribute_1>(get_class());
        }
    } // namespace MonoPInvokeCallbackAttribute_1
} // namespace app::classes::types
