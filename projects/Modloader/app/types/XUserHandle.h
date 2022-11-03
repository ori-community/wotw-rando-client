#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XUserHandle {
        inline app::XUserHandle__Class** type_info = (app::XUserHandle__Class**)(modloader::win::memory::resolve_rva(0x04775450));
        inline app::XUserHandle__Class* get_class() {
            return il2cpp::get_class<app::XUserHandle__Class>(type_info, "XGamingRuntime", "XUserHandle");
        }
        inline app::XUserHandle* create() {
            return il2cpp::create_object<app::XUserHandle>(get_class());
        }
    } // namespace XUserHandle
} // namespace app::classes::types
