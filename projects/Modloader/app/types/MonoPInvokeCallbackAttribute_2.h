#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MonoPInvokeCallbackAttribute_2 {
        namespace {
            inline app::MonoPInvokeCallbackAttribute_2__Class* type_info_ref = nullptr;
        }
        inline app::MonoPInvokeCallbackAttribute_2__Class** type_info = &type_info_ref;
        inline app::MonoPInvokeCallbackAttribute_2__Class* get_class() {
            return il2cpp::get_class<app::MonoPInvokeCallbackAttribute_2__Class>(type_info, "XGamingRuntime", "MonoPInvokeCallbackAttribute");
        }
        inline app::MonoPInvokeCallbackAttribute_2* create() {
            return il2cpp::create_object<app::MonoPInvokeCallbackAttribute_2>(get_class());
        }
    } // namespace MonoPInvokeCallbackAttribute_2
} // namespace app::classes::types
