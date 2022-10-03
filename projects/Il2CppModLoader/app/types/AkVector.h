#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkVector {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AkVector__Class** type_info;
        inline app::AkVector__Class* get_class() {
            return il2cpp::get_class<app::AkVector__Class>(type_info, "", "AkVector");
        }
        inline app::AkVector* create() {
            return il2cpp::create_object<app::AkVector>(get_class());
        }
    } // namespace AkVector
} // namespace app::classes::types
