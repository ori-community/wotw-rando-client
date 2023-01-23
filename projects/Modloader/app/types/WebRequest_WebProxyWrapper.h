#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WebRequest_WebProxyWrapper__Class.h>
#include <Modloader/app/structs/WebRequest_WebProxyWrapper.h>

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
