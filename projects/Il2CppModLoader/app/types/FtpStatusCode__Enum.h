#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FtpStatusCode__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FtpStatusCode__Enum__Class** type_info;
        inline app::FtpStatusCode__Enum__Class* get_class() {
            return il2cpp::get_class<app::FtpStatusCode__Enum__Class>(type_info, "System.Net", "FtpStatusCode");
        }
        inline app::FtpStatusCode__Enum* create() {
            return il2cpp::create_object<app::FtpStatusCode__Enum>(get_class());
        }
    } // namespace FtpStatusCode__Enum
} // namespace app::classes::types
