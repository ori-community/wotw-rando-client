#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HttpListenerException {
        inline app::HttpListenerException__Class** type_info = (app::HttpListenerException__Class**)(modloader::win::memory::resolve_rva(0x0470EEB0));
        inline app::HttpListenerException__Class* get_class() {
            return il2cpp::get_class<app::HttpListenerException__Class>(type_info, "System.Net", "HttpListenerException");
        }
        inline app::HttpListenerException* create() {
            return il2cpp::create_object<app::HttpListenerException>(get_class());
        }
    } // namespace HttpListenerException
} // namespace app::classes::types
