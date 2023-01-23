#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpiderBossAnimationPlayer__Class.h>
#include <Modloader/app/structs/SpiderBossAnimationPlayer.h>

namespace app::classes::types {
    namespace SpiderBossAnimationPlayer {
        inline app::SpiderBossAnimationPlayer__Class** type_info = (app::SpiderBossAnimationPlayer__Class**)(modloader::win::memory::resolve_rva(0x0476F5B0));
        inline app::SpiderBossAnimationPlayer__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossAnimationPlayer__Class>(type_info, "Moon.Timeline", "SpiderBossAnimationPlayer");
        }
        inline app::SpiderBossAnimationPlayer* create() {
            return il2cpp::create_object<app::SpiderBossAnimationPlayer>(get_class());
        }
    } // namespace SpiderBossAnimationPlayer
} // namespace app::classes::types
