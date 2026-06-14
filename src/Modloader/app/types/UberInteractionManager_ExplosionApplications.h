#pragma once
#include <Modloader/app/structs/UberInteractionManager_ExplosionApplications.h>
#include <Modloader/app/structs/UberInteractionManager_ExplosionApplications__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberInteractionManager_ExplosionApplications {
        inline app::UberInteractionManager_ExplosionApplications__Class** type_info() {
            static app::UberInteractionManager_ExplosionApplications__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberInteractionManager_ExplosionApplications__Class**)(modloader::win::memory::resolve_rva(0x0470A258));
            }
            return cache;
        }
        inline app::UberInteractionManager_ExplosionApplications__Class* get_class() {
            return il2cpp::get_nested_class<app::UberInteractionManager_ExplosionApplications__Class>(type_info(), "", "UberInteractionManager", "ExplosionApplications");
        }
        inline app::UberInteractionManager_ExplosionApplications* create() {
            return il2cpp::create_object<app::UberInteractionManager_ExplosionApplications>(get_class());
        }
    } // namespace UberInteractionManager_ExplosionApplications
} // namespace app::classes::types
