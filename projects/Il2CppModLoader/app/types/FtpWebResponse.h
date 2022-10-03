#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FtpWebResponse {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FtpWebResponse__Class** type_info;
        inline app::FtpWebResponse__Class* get_class() {
            return il2cpp::get_class<app::FtpWebResponse__Class>(type_info, "System.Net", "FtpWebResponse");
        }
        inline app::FtpWebResponse* create() {
            return il2cpp::create_object<app::FtpWebResponse>(get_class());
        }
    } // namespace FtpWebResponse
} // namespace app::classes::types
