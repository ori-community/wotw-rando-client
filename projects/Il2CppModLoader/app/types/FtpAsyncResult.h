#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FtpAsyncResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FtpAsyncResult__Class** type_info;
        inline app::FtpAsyncResult__Class* get_class() {
            return il2cpp::get_class<app::FtpAsyncResult__Class>(type_info, "System.Net", "FtpAsyncResult");
        }
        inline app::FtpAsyncResult* create() {
            return il2cpp::create_object<app::FtpAsyncResult>(get_class());
        }
    } // namespace FtpAsyncResult
} // namespace app::classes::types
