#pragma once
#include <Modloader/app/structs/AttachSoundToPhysicsSystem.h>
#include <Modloader/app/structs/AttachSoundToPhysicsSystem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AttachSoundToPhysicsSystem {
        inline app::AttachSoundToPhysicsSystem__Class** type_info() {
            static app::AttachSoundToPhysicsSystem__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AttachSoundToPhysicsSystem__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AttachSoundToPhysicsSystem__Class* get_class() {
            return il2cpp::get_class<app::AttachSoundToPhysicsSystem__Class>(type_info(), "", "AttachSoundToPhysicsSystem");
        }
        inline app::AttachSoundToPhysicsSystem* create() {
            return il2cpp::create_object<app::AttachSoundToPhysicsSystem>(get_class());
        }
    } // namespace AttachSoundToPhysicsSystem
} // namespace app::classes::types
