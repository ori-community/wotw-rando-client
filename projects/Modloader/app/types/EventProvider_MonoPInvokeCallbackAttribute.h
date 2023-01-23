#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EventProvider_MonoPInvokeCallbackAttribute__Class.h>
#include <Modloader/app/structs/EventProvider_MonoPInvokeCallbackAttribute.h>

namespace app::classes::types {
    namespace EventProvider_MonoPInvokeCallbackAttribute {
        namespace {
            inline app::EventProvider_MonoPInvokeCallbackAttribute__Class* type_info_ref = nullptr;
        }
        inline app::EventProvider_MonoPInvokeCallbackAttribute__Class** type_info = &type_info_ref;
        inline app::EventProvider_MonoPInvokeCallbackAttribute__Class* get_class() {
            return il2cpp::get_nested_class<app::EventProvider_MonoPInvokeCallbackAttribute__Class>(type_info, "System.Diagnostics.Tracing", "EventProvider", "MonoPInvokeCallbackAttribute");
        }
        inline app::EventProvider_MonoPInvokeCallbackAttribute* create() {
            return il2cpp::create_object<app::EventProvider_MonoPInvokeCallbackAttribute>(get_class());
        }
    } // namespace EventProvider_MonoPInvokeCallbackAttribute
} // namespace app::classes::types
