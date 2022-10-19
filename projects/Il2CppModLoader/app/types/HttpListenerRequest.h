#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HttpListenerRequest {
        inline app::HttpListenerRequest__Class** type_info = (app::HttpListenerRequest__Class**)(modloader::win::memory::resolve_rva(0x04715F70));
        inline app::HttpListenerRequest__Class* get_class() {
            return il2cpp::get_class<app::HttpListenerRequest__Class>(type_info, "System.Net", "HttpListenerRequest");
        }
        inline app::HttpListenerRequest* create() {
            return il2cpp::create_object<app::HttpListenerRequest>(get_class());
        }
    } // namespace HttpListenerRequest
} // namespace app::classes::types
