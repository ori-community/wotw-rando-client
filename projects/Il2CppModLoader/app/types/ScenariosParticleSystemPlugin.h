#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ScenariosParticleSystemPlugin {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ScenariosParticleSystemPlugin__Class** type_info;
        inline app::ScenariosParticleSystemPlugin__Class* get_class() {
            return il2cpp::get_class<app::ScenariosParticleSystemPlugin__Class>(type_info, "", "ScenariosParticleSystemPlugin");
        }
        inline app::ScenariosParticleSystemPlugin* create() {
            return il2cpp::create_object<app::ScenariosParticleSystemPlugin>(get_class());
        }
    } // namespace ScenariosParticleSystemPlugin
} // namespace app::classes::types
