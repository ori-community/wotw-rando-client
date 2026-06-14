#pragma once
#include <Modloader/app/structs/GhostGenericSoundPlayer.h>
#include <Modloader/app/structs/GhostGenericSoundPlayer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GhostGenericSoundPlayer {
        inline app::GhostGenericSoundPlayer__Class** type_info() {
            static app::GhostGenericSoundPlayer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GhostGenericSoundPlayer__Class**)(modloader::win::memory::resolve_rva(0x047799A8));
            }
            return cache;
        }
        inline app::GhostGenericSoundPlayer__Class* get_class() {
            return il2cpp::get_class<app::GhostGenericSoundPlayer__Class>(type_info(), "", "GhostGenericSoundPlayer");
        }
        inline app::GhostGenericSoundPlayer* create() {
            return il2cpp::create_object<app::GhostGenericSoundPlayer>(get_class());
        }
    } // namespace GhostGenericSoundPlayer
} // namespace app::classes::types
