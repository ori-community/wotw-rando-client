#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ScenariosParticleSystemPlugin_TrackingID__Array__Class.h>
#include <Modloader/app/structs/ScenariosParticleSystemPlugin_TrackingID__Array.h>

namespace app::classes::types {
    namespace ScenariosParticleSystemPlugin_TrackingID__Array {
        namespace {
            inline app::ScenariosParticleSystemPlugin_TrackingID__Array__Class* type_info_ref = nullptr;
        }
        inline app::ScenariosParticleSystemPlugin_TrackingID__Array__Class** type_info = &type_info_ref;
        inline app::ScenariosParticleSystemPlugin_TrackingID__Array__Class* get_class() {
            return il2cpp::get_class<app::ScenariosParticleSystemPlugin_TrackingID__Array__Class>(type_info, "", "ScenariosParticleSystemPlugin+TrackingID[]");
        }
        inline app::ScenariosParticleSystemPlugin_TrackingID__Array* create() {
            return il2cpp::create_object<app::ScenariosParticleSystemPlugin_TrackingID__Array>(get_class());
        }
    } // namespace ScenariosParticleSystemPlugin_TrackingID__Array
} // namespace app::classes::types
