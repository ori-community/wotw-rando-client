#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ProcessWaitHandle {
        inline app::ProcessWaitHandle__Class** type_info = (app::ProcessWaitHandle__Class**)(modloader::win::memory::resolve_rva(0x04740780));
        inline app::ProcessWaitHandle__Class* get_class() {
            return il2cpp::get_class<app::ProcessWaitHandle__Class>(type_info, "System.Diagnostics", "ProcessWaitHandle");
        }
        inline app::ProcessWaitHandle* create() {
            return il2cpp::create_object<app::ProcessWaitHandle>(get_class());
        }
    } // namespace ProcessWaitHandle
} // namespace app::classes::types
