#pragma once
#include <Modloader/app/structs/ScenariosParticleSystemPlugin.h>
#include <Modloader/app/structs/ScenariosParticleSystemPlugin__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScenariosParticleSystemPlugin {
        inline app::ScenariosParticleSystemPlugin__Class** type_info() {
            static app::ScenariosParticleSystemPlugin__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ScenariosParticleSystemPlugin__Class**)(modloader::win::memory::resolve_rva(0x04780A88));
            }
            return cache;
        }
        inline app::ScenariosParticleSystemPlugin__Class* get_class() {
            return il2cpp::get_class<app::ScenariosParticleSystemPlugin__Class>(type_info(), "", "ScenariosParticleSystemPlugin");
        }
        inline app::ScenariosParticleSystemPlugin* create() {
            return il2cpp::create_object<app::ScenariosParticleSystemPlugin>(get_class());
        }
    } // namespace ScenariosParticleSystemPlugin
} // namespace app::classes::types
