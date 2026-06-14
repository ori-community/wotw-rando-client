#pragma once
#include <Modloader/app/structs/CharacterPlatformMovement_KickbackEntry.h>
#include <Modloader/app/structs/CharacterPlatformMovement_KickbackEntry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharacterPlatformMovement_KickbackEntry {
        inline app::CharacterPlatformMovement_KickbackEntry__Class** type_info() {
            static app::CharacterPlatformMovement_KickbackEntry__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CharacterPlatformMovement_KickbackEntry__Class**)(modloader::win::memory::resolve_rva(0x047714E0));
            }
            return cache;
        }
        inline app::CharacterPlatformMovement_KickbackEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::CharacterPlatformMovement_KickbackEntry__Class>(type_info(), "", "CharacterPlatformMovement", "KickbackEntry");
        }
        inline app::CharacterPlatformMovement_KickbackEntry* create() {
            return il2cpp::create_object<app::CharacterPlatformMovement_KickbackEntry>(get_class());
        }
    } // namespace CharacterPlatformMovement_KickbackEntry
} // namespace app::classes::types
