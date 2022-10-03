#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WebResponse_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WebResponse_1__Class** type_info;
        inline app::WebResponse_1__Class* get_class() {
            return il2cpp::get_class<app::WebResponse_1__Class>(type_info, "Moon.Network.Web", "WebResponse");
        }
        inline app::WebResponse_1* create() {
            return il2cpp::create_object<app::WebResponse_1>(get_class());
        }
    } // namespace WebResponse_1
} // namespace app::classes::types
