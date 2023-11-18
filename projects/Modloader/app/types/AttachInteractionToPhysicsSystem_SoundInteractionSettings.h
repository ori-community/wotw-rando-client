#pragma once
#include <Modloader/app/structs/AttachInteractionToPhysicsSystem_SoundInteractionSettings.h>
#include <Modloader/app/structs/AttachInteractionToPhysicsSystem_SoundInteractionSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AttachInteractionToPhysicsSystem_SoundInteractionSettings {
        inline app::AttachInteractionToPhysicsSystem_SoundInteractionSettings__Class** type_info() {
            static app::AttachInteractionToPhysicsSystem_SoundInteractionSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AttachInteractionToPhysicsSystem_SoundInteractionSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AttachInteractionToPhysicsSystem_SoundInteractionSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::AttachInteractionToPhysicsSystem_SoundInteractionSettings__Class>(type_info(), "", "AttachInteractionToPhysicsSystem", "SoundInteractionSettings");
        }
        inline app::AttachInteractionToPhysicsSystem_SoundInteractionSettings* create() {
            return il2cpp::create_object<app::AttachInteractionToPhysicsSystem_SoundInteractionSettings>(get_class());
        }
    } // namespace AttachInteractionToPhysicsSystem_SoundInteractionSettings
} // namespace app::classes::types
