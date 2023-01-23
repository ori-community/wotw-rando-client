#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XUserChangeEventCallback__Class.h>
#include <Modloader/app/structs/XUserChangeEventCallback.h>

namespace app::classes::types {
    namespace XUserChangeEventCallback {
        inline app::XUserChangeEventCallback__Class** type_info = (app::XUserChangeEventCallback__Class**)(modloader::win::memory::resolve_rva(0x04767190));
        inline app::XUserChangeEventCallback__Class* get_class() {
            return il2cpp::get_class<app::XUserChangeEventCallback__Class>(type_info, "XGamingRuntime", "XUserChangeEventCallback");
        }
        inline app::XUserChangeEventCallback* create() {
            return il2cpp::create_object<app::XUserChangeEventCallback>(get_class());
        }
    } // namespace XUserChangeEventCallback
} // namespace app::classes::types
