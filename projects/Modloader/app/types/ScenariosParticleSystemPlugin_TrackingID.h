#pragma once
#include <Modloader/app/structs/ScenariosParticleSystemPlugin_TrackingID.h>
#include <Modloader/app/structs/ScenariosParticleSystemPlugin_TrackingID__Array.h>
#include <Modloader/app/structs/ScenariosParticleSystemPlugin_TrackingID__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScenariosParticleSystemPlugin_TrackingID {
        inline app::ScenariosParticleSystemPlugin_TrackingID__Class** type_info() {
            static app::ScenariosParticleSystemPlugin_TrackingID__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ScenariosParticleSystemPlugin_TrackingID__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ScenariosParticleSystemPlugin_TrackingID__Class* get_class() {
            return il2cpp::get_nested_class<app::ScenariosParticleSystemPlugin_TrackingID__Class>(type_info(), "", "ScenariosParticleSystemPlugin", "TrackingID");
        }
        inline app::ScenariosParticleSystemPlugin_TrackingID* create() {
            return il2cpp::create_object<app::ScenariosParticleSystemPlugin_TrackingID>(get_class());
        }
        inline app::ScenariosParticleSystemPlugin_TrackingID__Array* create_array(int size) {
            return il2cpp::array_new<app::ScenariosParticleSystemPlugin_TrackingID__Array>(get_class(), size);
        }
        inline app::ScenariosParticleSystemPlugin_TrackingID__Array* create_array(const std::vector<app::ScenariosParticleSystemPlugin_TrackingID*>& items) {
            return il2cpp::array_new<app::ScenariosParticleSystemPlugin_TrackingID__Array>(get_class(), items);
        }
    } // namespace ScenariosParticleSystemPlugin_TrackingID
} // namespace app::classes::types
