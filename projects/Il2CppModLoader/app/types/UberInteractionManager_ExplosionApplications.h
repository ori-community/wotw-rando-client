#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberInteractionManager_ExplosionApplications {
        inline app::UberInteractionManager_ExplosionApplications__Class** type_info = (app::UberInteractionManager_ExplosionApplications__Class**)(modloader::win::memory::resolve_rva(0x0470A258));
        inline app::UberInteractionManager_ExplosionApplications__Class* get_class() {
            return il2cpp::get_nested_class<app::UberInteractionManager_ExplosionApplications__Class>(type_info, "", "UberInteractionManager", "ExplosionApplications");
        }
        inline app::UberInteractionManager_ExplosionApplications* create() {
            return il2cpp::create_object<app::UberInteractionManager_ExplosionApplications>(get_class());
        }
    } // namespace UberInteractionManager_ExplosionApplications
} // namespace app::classes::types
