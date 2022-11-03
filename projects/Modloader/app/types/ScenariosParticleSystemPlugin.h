#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ScenariosParticleSystemPlugin {
        inline app::ScenariosParticleSystemPlugin__Class** type_info = (app::ScenariosParticleSystemPlugin__Class**)(modloader::win::memory::resolve_rva(0x04780A88));
        inline app::ScenariosParticleSystemPlugin__Class* get_class() {
            return il2cpp::get_class<app::ScenariosParticleSystemPlugin__Class>(type_info, "", "ScenariosParticleSystemPlugin");
        }
        inline app::ScenariosParticleSystemPlugin* create() {
            return il2cpp::create_object<app::ScenariosParticleSystemPlugin>(get_class());
        }
    } // namespace ScenariosParticleSystemPlugin
} // namespace app::classes::types
