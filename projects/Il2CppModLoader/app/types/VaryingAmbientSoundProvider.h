#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VaryingAmbientSoundProvider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::VaryingAmbientSoundProvider__Class** type_info;
        inline app::VaryingAmbientSoundProvider__Class* get_class() {
            return il2cpp::get_class<app::VaryingAmbientSoundProvider__Class>(type_info, "", "VaryingAmbientSoundProvider");
        }
        inline app::VaryingAmbientSoundProvider* create() {
            return il2cpp::create_object<app::VaryingAmbientSoundProvider>(get_class());
        }
    } // namespace VaryingAmbientSoundProvider
} // namespace app::classes::types
