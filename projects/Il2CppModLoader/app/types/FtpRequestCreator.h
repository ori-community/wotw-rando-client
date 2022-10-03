#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FtpRequestCreator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FtpRequestCreator__Class** type_info;
        inline app::FtpRequestCreator__Class* get_class() {
            return il2cpp::get_class<app::FtpRequestCreator__Class>(type_info, "System.Net", "FtpRequestCreator");
        }
        inline app::FtpRequestCreator* create() {
            return il2cpp::create_object<app::FtpRequestCreator>(get_class());
        }
    } // namespace FtpRequestCreator
} // namespace app::classes::types
