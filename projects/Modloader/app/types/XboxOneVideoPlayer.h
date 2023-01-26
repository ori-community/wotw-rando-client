#pragma once
#include <Modloader/app/structs/XboxOneVideoPlayer.h>
#include <Modloader/app/structs/XboxOneVideoPlayer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XboxOneVideoPlayer {
        inline app::XboxOneVideoPlayer__Class** type_info() {
            static app::XboxOneVideoPlayer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XboxOneVideoPlayer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XboxOneVideoPlayer__Class* get_class() {
            return il2cpp::get_class<app::XboxOneVideoPlayer__Class>(type_info(), "", "XboxOneVideoPlayer");
        }
        inline app::XboxOneVideoPlayer* create() {
            return il2cpp::create_object<app::XboxOneVideoPlayer>(get_class());
        }
    } // namespace XboxOneVideoPlayer
} // namespace app::classes::types
