#pragma once
#include <Modloader/app/structs/SwitchVideoPlayer.h>
#include <Modloader/app/structs/SwitchVideoPlayer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SwitchVideoPlayer {
        inline app::SwitchVideoPlayer__Class** type_info() {
            static app::SwitchVideoPlayer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SwitchVideoPlayer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SwitchVideoPlayer__Class* get_class() {
            return il2cpp::get_class<app::SwitchVideoPlayer__Class>(type_info(), "", "SwitchVideoPlayer");
        }
        inline app::SwitchVideoPlayer* create() {
            return il2cpp::create_object<app::SwitchVideoPlayer>(get_class());
        }
    } // namespace SwitchVideoPlayer
} // namespace app::classes::types
