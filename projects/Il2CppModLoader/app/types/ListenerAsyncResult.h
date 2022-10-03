#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ListenerAsyncResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ListenerAsyncResult__Class** type_info;
        inline app::ListenerAsyncResult__Class* get_class() {
            return il2cpp::get_class<app::ListenerAsyncResult__Class>(type_info, "System.Net", "ListenerAsyncResult");
        }
        inline app::ListenerAsyncResult* create() {
            return il2cpp::create_object<app::ListenerAsyncResult>(get_class());
        }
    } // namespace ListenerAsyncResult
} // namespace app::classes::types
