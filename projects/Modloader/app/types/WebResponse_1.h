#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WebResponse_1 {
        inline app::WebResponse_1__Class** type_info = (app::WebResponse_1__Class**)(modloader::win::memory::resolve_rva(0x04713D08));
        inline app::WebResponse_1__Class* get_class() {
            return il2cpp::get_class<app::WebResponse_1__Class>(type_info, "Moon.Network.Web", "WebResponse");
        }
        inline app::WebResponse_1* create() {
            return il2cpp::create_object<app::WebResponse_1>(get_class());
        }
    } // namespace WebResponse_1
} // namespace app::classes::types
