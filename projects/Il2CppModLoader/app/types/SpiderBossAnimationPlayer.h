#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiderBossAnimationPlayer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SpiderBossAnimationPlayer__Class** type_info;
        inline app::SpiderBossAnimationPlayer__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossAnimationPlayer__Class>(type_info, "Moon.Timeline", "SpiderBossAnimationPlayer");
        }
        inline app::SpiderBossAnimationPlayer* create() {
            return il2cpp::create_object<app::SpiderBossAnimationPlayer>(get_class());
        }
    } // namespace SpiderBossAnimationPlayer
} // namespace app::classes::types
