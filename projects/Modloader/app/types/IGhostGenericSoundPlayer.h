#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IGhostGenericSoundPlayer__Class.h>

namespace app::classes::types {
    namespace IGhostGenericSoundPlayer {
        inline app::IGhostGenericSoundPlayer__Class** type_info = (app::IGhostGenericSoundPlayer__Class**)(modloader::win::memory::resolve_rva(0x0475ABE8));
        inline app::IGhostGenericSoundPlayer__Class* get_class() {
            return il2cpp::get_class<app::IGhostGenericSoundPlayer__Class>(type_info, "", "IGhostGenericSoundPlayer");
        }
    } // namespace IGhostGenericSoundPlayer
} // namespace app::classes::types
