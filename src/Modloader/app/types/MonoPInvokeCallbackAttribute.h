#pragma once
#include <Modloader/app/structs/MonoPInvokeCallbackAttribute.h>
#include <Modloader/app/structs/MonoPInvokeCallbackAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MonoPInvokeCallbackAttribute {
        inline app::MonoPInvokeCallbackAttribute__Class** type_info() {
            static app::MonoPInvokeCallbackAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MonoPInvokeCallbackAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MonoPInvokeCallbackAttribute__Class* get_class() {
            return il2cpp::get_class<app::MonoPInvokeCallbackAttribute__Class>(type_info(), "Mono.Util", "MonoPInvokeCallbackAttribute");
        }
        inline app::MonoPInvokeCallbackAttribute* create() {
            return il2cpp::create_object<app::MonoPInvokeCallbackAttribute>(get_class());
        }
    } // namespace MonoPInvokeCallbackAttribute
} // namespace app::classes::types
