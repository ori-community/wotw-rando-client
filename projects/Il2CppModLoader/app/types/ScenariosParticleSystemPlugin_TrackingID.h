#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ScenariosParticleSystemPlugin_TrackingID {
        namespace {
            app::ScenariosParticleSystemPlugin_TrackingID__Class* type_info_ref = nullptr;
        }
        app::ScenariosParticleSystemPlugin_TrackingID__Class** type_info = &type_info_ref;
        inline app::ScenariosParticleSystemPlugin_TrackingID__Class* get_class() {
            return il2cpp::get_nested_class<app::ScenariosParticleSystemPlugin_TrackingID__Class>(type_info, "", "ScenariosParticleSystemPlugin", "TrackingID");
        }
        inline app::ScenariosParticleSystemPlugin_TrackingID* create() {
            return il2cpp::create_object<app::ScenariosParticleSystemPlugin_TrackingID>(get_class());
        }
        inline app::ScenariosParticleSystemPlugin_TrackingID__Array* create_array(int size) {
            return il2cpp::array_new<app::ScenariosParticleSystemPlugin_TrackingID__Array>(get_class(), size);
        }
    } // namespace ScenariosParticleSystemPlugin_TrackingID
} // namespace app::classes::types
