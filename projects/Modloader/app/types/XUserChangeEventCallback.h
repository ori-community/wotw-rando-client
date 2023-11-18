#pragma once
#include <Modloader/app/structs/XUserChangeEventCallback.h>
#include <Modloader/app/structs/XUserChangeEventCallback__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XUserChangeEventCallback {
        inline app::XUserChangeEventCallback__Class** type_info() {
            static app::XUserChangeEventCallback__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XUserChangeEventCallback__Class**)(modloader::win::memory::resolve_rva(0x04767190));
            }
            return cache;
        }
        inline app::XUserChangeEventCallback__Class* get_class() {
            return il2cpp::get_class<app::XUserChangeEventCallback__Class>(type_info(), "XGamingRuntime", "XUserChangeEventCallback");
        }
        inline app::XUserChangeEventCallback* create() {
            return il2cpp::create_object<app::XUserChangeEventCallback>(get_class());
        }
    } // namespace XUserChangeEventCallback
} // namespace app::classes::types
