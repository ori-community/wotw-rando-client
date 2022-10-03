#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FtpDataStream_WriteDelegate {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FtpDataStream_WriteDelegate__Class** type_info;
        inline app::FtpDataStream_WriteDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::FtpDataStream_WriteDelegate__Class>(type_info, "System.Net", "FtpDataStream", "WriteDelegate");
        }
        inline app::FtpDataStream_WriteDelegate* create() {
            return il2cpp::create_object<app::FtpDataStream_WriteDelegate>(get_class());
        }
    } // namespace FtpDataStream_WriteDelegate
} // namespace app::classes::types
