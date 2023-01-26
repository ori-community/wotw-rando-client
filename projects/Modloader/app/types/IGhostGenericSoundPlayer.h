#pragma once
#include <Modloader/app/structs/IGhostGenericSoundPlayer.h>
#include <Modloader/app/structs/IGhostGenericSoundPlayer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IGhostGenericSoundPlayer {
        inline app::IGhostGenericSoundPlayer__Class** type_info() {
            static app::IGhostGenericSoundPlayer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IGhostGenericSoundPlayer__Class**)(modloader::win::memory::resolve_rva(0x0475ABE8));
            }
            return cache;
        }
        inline app::IGhostGenericSoundPlayer__Class* get_class() {
            return il2cpp::get_class<app::IGhostGenericSoundPlayer__Class>(type_info(), "", "IGhostGenericSoundPlayer");
        }
    } // namespace IGhostGenericSoundPlayer
} // namespace app::classes::types
