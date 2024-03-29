#pragma once
#include <Modloader/app/structs/CharacterPlatformMovement_MoveSeinToPositionSmoothly_d_224.h>
#include <Modloader/app/structs/CharacterPlatformMovement_MoveSeinToPositionSmoothly_d_224__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharacterPlatformMovement_MoveSeinToPositionSmoothly_d_224 {
        inline app::CharacterPlatformMovement_MoveSeinToPositionSmoothly_d_224__Class** type_info() {
            static app::CharacterPlatformMovement_MoveSeinToPositionSmoothly_d_224__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CharacterPlatformMovement_MoveSeinToPositionSmoothly_d_224__Class**)(modloader::win::memory::resolve_rva(0x0474E7A8));
            }
            return cache;
        }
        inline app::CharacterPlatformMovement_MoveSeinToPositionSmoothly_d_224__Class* get_class() {
            return il2cpp::get_nested_class<app::CharacterPlatformMovement_MoveSeinToPositionSmoothly_d_224__Class>(type_info(), "", "CharacterPlatformMovement", "<MoveSeinToPositionSmoothly>d__224");
        }
        inline app::CharacterPlatformMovement_MoveSeinToPositionSmoothly_d_224* create() {
            return il2cpp::create_object<app::CharacterPlatformMovement_MoveSeinToPositionSmoothly_d_224>(get_class());
        }
    } // namespace CharacterPlatformMovement_MoveSeinToPositionSmoothly_d_224
} // namespace app::classes::types
