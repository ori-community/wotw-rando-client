#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WebRequest_WebProxyWrapper {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WebRequest_WebProxyWrapper__Class** type_info;
        inline app::WebRequest_WebProxyWrapper__Class* get_class() {
            return il2cpp::get_nested_class<app::WebRequest_WebProxyWrapper__Class>(type_info, "System.Net", "WebRequest", "WebProxyWrapper");
        }
        inline app::WebRequest_WebProxyWrapper* create() {
            return il2cpp::create_object<app::WebRequest_WebProxyWrapper>(get_class());
        }
    } // namespace WebRequest_WebProxyWrapper
} // namespace app::classes::types
