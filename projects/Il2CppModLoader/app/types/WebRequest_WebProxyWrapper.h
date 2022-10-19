#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WebRequest_WebProxyWrapper {
        inline app::WebRequest_WebProxyWrapper__Class** type_info = (app::WebRequest_WebProxyWrapper__Class**)(modloader::win::memory::resolve_rva(0x0472B730));
        inline app::WebRequest_WebProxyWrapper__Class* get_class() {
            return il2cpp::get_nested_class<app::WebRequest_WebProxyWrapper__Class>(type_info, "System.Net", "WebRequest", "WebProxyWrapper");
        }
        inline app::WebRequest_WebProxyWrapper* create() {
            return il2cpp::create_object<app::WebRequest_WebProxyWrapper>(get_class());
        }
    } // namespace WebRequest_WebProxyWrapper
} // namespace app::classes::types
