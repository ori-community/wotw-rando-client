#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FtpStatusCode__Enum {
        inline app::FtpStatusCode__Enum__Class** type_info = (app::FtpStatusCode__Enum__Class**)(modloader::win::memory::resolve_rva(0x0472F548));
        inline app::FtpStatusCode__Enum__Class* get_class() {
            return il2cpp::get_class<app::FtpStatusCode__Enum__Class>(type_info, "System.Net", "FtpStatusCode");
        }
        inline app::FtpStatusCode__Enum* create() {
            return il2cpp::create_object<app::FtpStatusCode__Enum>(get_class());
        }
    } // namespace FtpStatusCode__Enum
} // namespace app::classes::types
