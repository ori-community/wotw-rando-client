#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WaitCallback {
        inline app::WaitCallback__Class** type_info = (app::WaitCallback__Class**)(modloader::win::memory::resolve_rva(0x047686F8));
        inline app::WaitCallback__Class* get_class() {
            return il2cpp::get_class<app::WaitCallback__Class>(type_info, "System.Threading", "WaitCallback");
        }
        inline app::WaitCallback* create() {
            return il2cpp::create_object<app::WaitCallback>(get_class());
        }
    } // namespace WaitCallback
} // namespace app::classes::types
