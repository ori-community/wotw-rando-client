#pragma once
#include <Modloader/app/structs/UWPVideoPlayer_OnPlayDelegate.h>
#include <Modloader/app/structs/UWPVideoPlayer_OnPlayDelegate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UWPVideoPlayer_OnPlayDelegate {
        inline app::UWPVideoPlayer_OnPlayDelegate__Class** type_info() {
            static app::UWPVideoPlayer_OnPlayDelegate__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UWPVideoPlayer_OnPlayDelegate__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UWPVideoPlayer_OnPlayDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::UWPVideoPlayer_OnPlayDelegate__Class>(type_info(), "", "UWPVideoPlayer", "OnPlayDelegate");
        }
        inline app::UWPVideoPlayer_OnPlayDelegate* create() {
            return il2cpp::create_object<app::UWPVideoPlayer_OnPlayDelegate>(get_class());
        }
    } // namespace UWPVideoPlayer_OnPlayDelegate
} // namespace app::classes::types
