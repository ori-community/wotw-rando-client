#pragma once
#include <Modloader/app/structs/UberInteractionManager_ExplosionApplicationComparer.h>
#include <Modloader/app/structs/UberInteractionManager_ExplosionApplicationComparer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberInteractionManager_ExplosionApplicationComparer {
        inline app::UberInteractionManager_ExplosionApplicationComparer__Class** type_info() {
            static app::UberInteractionManager_ExplosionApplicationComparer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberInteractionManager_ExplosionApplicationComparer__Class**)(modloader::win::memory::resolve_rva(0x04729CC8));
            }
            return cache;
        }
        inline app::UberInteractionManager_ExplosionApplicationComparer__Class* get_class() {
            return il2cpp::get_nested_class<app::UberInteractionManager_ExplosionApplicationComparer__Class>(type_info(), "", "UberInteractionManager", "ExplosionApplicationComparer");
        }
        inline app::UberInteractionManager_ExplosionApplicationComparer* create() {
            return il2cpp::create_object<app::UberInteractionManager_ExplosionApplicationComparer>(get_class());
        }
    } // namespace UberInteractionManager_ExplosionApplicationComparer
} // namespace app::classes::types
