#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IWebRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IWebRequest__Class** type_info;
        inline app::IWebRequest__Class* get_class() {
            return il2cpp::get_class<app::IWebRequest__Class>(type_info, "Moon.Network.Web", "IWebRequest");
        }
        inline app::IWebRequest* create() {
            return il2cpp::create_object<app::IWebRequest>(get_class());
        }
    } // namespace IWebRequest
} // namespace app::classes::types
