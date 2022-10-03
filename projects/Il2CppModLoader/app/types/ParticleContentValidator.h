#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ParticleContentValidator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ParticleContentValidator__Class** type_info;
        inline app::ParticleContentValidator__Class* get_class() {
            return il2cpp::get_class<app::ParticleContentValidator__Class>(type_info, "System.Xml.Schema", "ParticleContentValidator");
        }
        inline app::ParticleContentValidator* create() {
            return il2cpp::create_object<app::ParticleContentValidator>(get_class());
        }
    } // namespace ParticleContentValidator
} // namespace app::classes::types
