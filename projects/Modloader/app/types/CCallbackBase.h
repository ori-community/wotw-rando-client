#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CCallbackBase {
        inline app::CCallbackBase__Class** type_info = (app::CCallbackBase__Class**)(modloader::win::memory::resolve_rva(0x0471DD90));
        inline app::CCallbackBase__Class* get_class() {
            return il2cpp::get_class<app::CCallbackBase__Class>(type_info, "Steamworks", "CCallbackBase");
        }
        inline app::CCallbackBase* create() {
            return il2cpp::create_object<app::CCallbackBase>(get_class());
        }
    } // namespace CCallbackBase
} // namespace app::classes::types
