#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace X509ChainStatusFlags__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::X509ChainStatusFlags__Enum__Class** type_info;
        inline app::X509ChainStatusFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::X509ChainStatusFlags__Enum__Class>(type_info, "System.Security.Cryptography.X509Certificates", "X509ChainStatusFlags");
        }
        inline app::X509ChainStatusFlags__Enum* create() {
            return il2cpp::create_object<app::X509ChainStatusFlags__Enum>(get_class());
        }
    } // namespace X509ChainStatusFlags__Enum
} // namespace app::classes::types
