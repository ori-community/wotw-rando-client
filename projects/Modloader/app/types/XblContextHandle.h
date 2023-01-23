#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XblContextHandle__Class.h>
#include <Modloader/app/structs/XblContextHandle.h>

namespace app::classes::types {
    namespace XblContextHandle {
        inline app::XblContextHandle__Class** type_info = (app::XblContextHandle__Class**)(modloader::win::memory::resolve_rva(0x0474B818));
        inline app::XblContextHandle__Class* get_class() {
            return il2cpp::get_class<app::XblContextHandle__Class>(type_info, "XGamingRuntime", "XblContextHandle");
        }
        inline app::XblContextHandle* create() {
            return il2cpp::create_object<app::XblContextHandle>(get_class());
        }
    } // namespace XblContextHandle
} // namespace app::classes::types
