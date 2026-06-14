#pragma once
#include <Modloader/app/structs/UberInteractionManager_ExplosionApplication__Array.h>
#include <Modloader/app/structs/UberInteractionManager_ExplosionApplication__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberInteractionManager_ExplosionApplication__Array {
        inline app::UberInteractionManager_ExplosionApplication__Array__Class** type_info() {
            static app::UberInteractionManager_ExplosionApplication__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberInteractionManager_ExplosionApplication__Array__Class**)(modloader::win::memory::resolve_rva(0x04705FE0));
            }
            return cache;
        }
        inline app::UberInteractionManager_ExplosionApplication__Array__Class* get_class() {
            return il2cpp::get_class<app::UberInteractionManager_ExplosionApplication__Array__Class>(type_info(), "", "UberInteractionManager+ExplosionApplication[]");
        }
        inline app::UberInteractionManager_ExplosionApplication__Array* create() {
            return il2cpp::create_object<app::UberInteractionManager_ExplosionApplication__Array>(get_class());
        }
    } // namespace UberInteractionManager_ExplosionApplication__Array
} // namespace app::classes::types
