#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ScenariosParticleSystemPlugin_TrackingID__Array {
        namespace {
            app::ScenariosParticleSystemPlugin_TrackingID__Array__Class* type_info_ref = nullptr;
        }
        app::ScenariosParticleSystemPlugin_TrackingID__Array__Class** type_info = &type_info_ref;
        inline app::ScenariosParticleSystemPlugin_TrackingID__Array__Class* get_class() {
            return il2cpp::get_class<app::ScenariosParticleSystemPlugin_TrackingID__Array__Class>(type_info, "", "ScenariosParticleSystemPlugin+TrackingID[]");
        }
        inline app::ScenariosParticleSystemPlugin_TrackingID__Array* create() {
            return il2cpp::create_object<app::ScenariosParticleSystemPlugin_TrackingID__Array>(get_class());
        }
    } // namespace ScenariosParticleSystemPlugin_TrackingID__Array
} // namespace app::classes::types
