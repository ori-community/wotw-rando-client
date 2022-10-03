#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HitReactionSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HitReactionSettings__Class** type_info;
        inline app::HitReactionSettings__Class* get_class() {
            return il2cpp::get_class<app::HitReactionSettings__Class>(type_info, "", "HitReactionSettings");
        }
        inline app::HitReactionSettings* create() {
            return il2cpp::create_object<app::HitReactionSettings>(get_class());
        }
    } // namespace HitReactionSettings
} // namespace app::classes::types
