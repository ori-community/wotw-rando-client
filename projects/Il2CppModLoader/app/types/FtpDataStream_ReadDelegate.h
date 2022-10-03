#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FtpDataStream_ReadDelegate {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FtpDataStream_ReadDelegate__Class** type_info;
        inline app::FtpDataStream_ReadDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::FtpDataStream_ReadDelegate__Class>(type_info, "System.Net", "FtpDataStream", "ReadDelegate");
        }
        inline app::FtpDataStream_ReadDelegate* create() {
            return il2cpp::create_object<app::FtpDataStream_ReadDelegate>(get_class());
        }
    } // namespace FtpDataStream_ReadDelegate
} // namespace app::classes::types
