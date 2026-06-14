#pragma once
#include <Modloader/app/structs/XUserChangeEventCallback_1.h>
#include <Modloader/app/structs/XUserChangeEventCallback_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XUserChangeEventCallback_1 {
        inline app::XUserChangeEventCallback_1__Class** type_info() {
            static app::XUserChangeEventCallback_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XUserChangeEventCallback_1__Class**)(modloader::win::memory::resolve_rva(0x04774638));
            }
            return cache;
        }
        inline app::XUserChangeEventCallback_1__Class* get_class() {
            return il2cpp::get_class<app::XUserChangeEventCallback_1__Class>(type_info(), "XGamingRuntime.Interop", "XUserChangeEventCallback");
        }
        inline app::XUserChangeEventCallback_1* create() {
            return il2cpp::create_object<app::XUserChangeEventCallback_1>(get_class());
        }
    } // namespace XUserChangeEventCallback_1
} // namespace app::classes::types
