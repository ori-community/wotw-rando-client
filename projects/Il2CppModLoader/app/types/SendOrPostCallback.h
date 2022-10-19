#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SendOrPostCallback {
        inline app::SendOrPostCallback__Class** type_info = (app::SendOrPostCallback__Class**)(modloader::win::memory::resolve_rva(0x0470E2A0));
        inline app::SendOrPostCallback__Class* get_class() {
            return il2cpp::get_class<app::SendOrPostCallback__Class>(type_info, "System.Threading", "SendOrPostCallback");
        }
        inline app::SendOrPostCallback* create() {
            return il2cpp::create_object<app::SendOrPostCallback>(get_class());
        }
    } // namespace SendOrPostCallback
} // namespace app::classes::types
