#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FtpStatus {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FtpStatus__Class** type_info;
        inline app::FtpStatus__Class* get_class() {
            return il2cpp::get_class<app::FtpStatus__Class>(type_info, "System.Net", "FtpStatus");
        }
        inline app::FtpStatus* create() {
            return il2cpp::create_object<app::FtpStatus>(get_class());
        }
    } // namespace FtpStatus
} // namespace app::classes::types
