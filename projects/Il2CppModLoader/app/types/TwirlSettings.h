#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TwirlSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TwirlSettings__Class** type_info;
        inline app::TwirlSettings__Class* get_class() {
            return il2cpp::get_class<app::TwirlSettings__Class>(type_info, "", "TwirlSettings");
        }
        inline app::TwirlSettings* create() {
            return il2cpp::create_object<app::TwirlSettings>(get_class());
        }
    } // namespace TwirlSettings
} // namespace app::classes::types
