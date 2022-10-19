#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ListenerAsyncResult {
        inline app::ListenerAsyncResult__Class** type_info = (app::ListenerAsyncResult__Class**)(modloader::win::memory::resolve_rva(0x04744AC0));
        inline app::ListenerAsyncResult__Class* get_class() {
            return il2cpp::get_class<app::ListenerAsyncResult__Class>(type_info, "System.Net", "ListenerAsyncResult");
        }
        inline app::ListenerAsyncResult* create() {
            return il2cpp::create_object<app::ListenerAsyncResult>(get_class());
        }
    } // namespace ListenerAsyncResult
} // namespace app::classes::types
