#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MonoPInvokeCallbackAttribute_3__Class.h>
#include <Modloader/app/structs/MonoPInvokeCallbackAttribute_3.h>

namespace app::classes::types {
    namespace MonoPInvokeCallbackAttribute_3 {
        namespace {
            inline app::MonoPInvokeCallbackAttribute_3__Class* type_info_ref = nullptr;
        }
        inline app::MonoPInvokeCallbackAttribute_3__Class** type_info = &type_info_ref;
        inline app::MonoPInvokeCallbackAttribute_3__Class* get_class() {
            return il2cpp::get_class<app::MonoPInvokeCallbackAttribute_3__Class>(type_info, "Steamworks", "MonoPInvokeCallbackAttribute");
        }
        inline app::MonoPInvokeCallbackAttribute_3* create() {
            return il2cpp::create_object<app::MonoPInvokeCallbackAttribute_3>(get_class());
        }
    } // namespace MonoPInvokeCallbackAttribute_3
} // namespace app::classes::types
