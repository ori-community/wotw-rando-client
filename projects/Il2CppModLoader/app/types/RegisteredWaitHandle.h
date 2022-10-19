#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RegisteredWaitHandle {
        inline app::RegisteredWaitHandle__Class** type_info = (app::RegisteredWaitHandle__Class**)(modloader::win::memory::resolve_rva(0x0477AE20));
        inline app::RegisteredWaitHandle__Class* get_class() {
            return il2cpp::get_class<app::RegisteredWaitHandle__Class>(type_info, "System.Threading", "RegisteredWaitHandle");
        }
        inline app::RegisteredWaitHandle* create() {
            return il2cpp::create_object<app::RegisteredWaitHandle>(get_class());
        }
    } // namespace RegisteredWaitHandle
} // namespace app::classes::types
