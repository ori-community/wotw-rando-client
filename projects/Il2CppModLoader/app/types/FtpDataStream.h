#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FtpDataStream {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FtpDataStream__Class** type_info;
        inline app::FtpDataStream__Class* get_class() {
            return il2cpp::get_class<app::FtpDataStream__Class>(type_info, "System.Net", "FtpDataStream");
        }
        inline app::FtpDataStream* create() {
            return il2cpp::create_object<app::FtpDataStream>(get_class());
        }
    } // namespace FtpDataStream
} // namespace app::classes::types
