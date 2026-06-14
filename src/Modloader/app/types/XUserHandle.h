#pragma once
#include <Modloader/app/structs/XUserHandle.h>
#include <Modloader/app/structs/XUserHandle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XUserHandle {
        inline app::XUserHandle__Class** type_info() {
            static app::XUserHandle__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XUserHandle__Class**)(modloader::win::memory::resolve_rva(0x04775450));
            }
            return cache;
        }
        inline app::XUserHandle__Class* get_class() {
            return il2cpp::get_class<app::XUserHandle__Class>(type_info(), "XGamingRuntime", "XUserHandle");
        }
        inline app::XUserHandle* create() {
            return il2cpp::create_object<app::XUserHandle>(get_class());
        }
    } // namespace XUserHandle
} // namespace app::classes::types
