#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HttpListenerResponse {
        inline app::HttpListenerResponse__Class** type_info = (app::HttpListenerResponse__Class**)(modloader::win::memory::resolve_rva(0x04727DC0));
        inline app::HttpListenerResponse__Class* get_class() {
            return il2cpp::get_class<app::HttpListenerResponse__Class>(type_info, "System.Net", "HttpListenerResponse");
        }
        inline app::HttpListenerResponse* create() {
            return il2cpp::create_object<app::HttpListenerResponse>(get_class());
        }
    } // namespace HttpListenerResponse
} // namespace app::classes::types
