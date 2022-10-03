#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FtpWebRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FtpWebRequest__Class** type_info;
        inline app::FtpWebRequest__Class* get_class() {
            return il2cpp::get_class<app::FtpWebRequest__Class>(type_info, "System.Net", "FtpWebRequest");
        }
        inline app::FtpWebRequest* create() {
            return il2cpp::create_object<app::FtpWebRequest>(get_class());
        }
    } // namespace FtpWebRequest
} // namespace app::classes::types
