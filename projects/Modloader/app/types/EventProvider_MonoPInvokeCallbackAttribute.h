#pragma once
#include <Modloader/app/structs/EventProvider_MonoPInvokeCallbackAttribute.h>
#include <Modloader/app/structs/EventProvider_MonoPInvokeCallbackAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EventProvider_MonoPInvokeCallbackAttribute {
        inline app::EventProvider_MonoPInvokeCallbackAttribute__Class** type_info() {
            static app::EventProvider_MonoPInvokeCallbackAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EventProvider_MonoPInvokeCallbackAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EventProvider_MonoPInvokeCallbackAttribute__Class* get_class() {
            return il2cpp::get_nested_class<app::EventProvider_MonoPInvokeCallbackAttribute__Class>(type_info(), "System.Diagnostics.Tracing", "EventProvider", "MonoPInvokeCallbackAttribute");
        }
        inline app::EventProvider_MonoPInvokeCallbackAttribute* create() {
            return il2cpp::create_object<app::EventProvider_MonoPInvokeCallbackAttribute>(get_class());
        }
    } // namespace EventProvider_MonoPInvokeCallbackAttribute
} // namespace app::classes::types
