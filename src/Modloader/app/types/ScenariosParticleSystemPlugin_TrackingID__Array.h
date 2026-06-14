#pragma once
#include <Modloader/app/structs/ScenariosParticleSystemPlugin_TrackingID__Array.h>
#include <Modloader/app/structs/ScenariosParticleSystemPlugin_TrackingID__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScenariosParticleSystemPlugin_TrackingID__Array {
        inline app::ScenariosParticleSystemPlugin_TrackingID__Array__Class** type_info() {
            static app::ScenariosParticleSystemPlugin_TrackingID__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ScenariosParticleSystemPlugin_TrackingID__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ScenariosParticleSystemPlugin_TrackingID__Array__Class* get_class() {
            return il2cpp::get_class<app::ScenariosParticleSystemPlugin_TrackingID__Array__Class>(type_info(), "", "ScenariosParticleSystemPlugin+TrackingID[]");
        }
        inline app::ScenariosParticleSystemPlugin_TrackingID__Array* create() {
            return il2cpp::create_object<app::ScenariosParticleSystemPlugin_TrackingID__Array>(get_class());
        }
    } // namespace ScenariosParticleSystemPlugin_TrackingID__Array
} // namespace app::classes::types
