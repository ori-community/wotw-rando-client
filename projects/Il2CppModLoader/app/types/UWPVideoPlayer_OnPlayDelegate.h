#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UWPVideoPlayer_OnPlayDelegate {
        namespace {
            app::UWPVideoPlayer_OnPlayDelegate__Class* type_info_ref = nullptr;
        }
        app::UWPVideoPlayer_OnPlayDelegate__Class** type_info = &type_info_ref;
        inline app::UWPVideoPlayer_OnPlayDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::UWPVideoPlayer_OnPlayDelegate__Class>(type_info, "", "UWPVideoPlayer", "OnPlayDelegate");
        }
        inline app::UWPVideoPlayer_OnPlayDelegate* create() {
            return il2cpp::create_object<app::UWPVideoPlayer_OnPlayDelegate>(get_class());
        }
    } // namespace UWPVideoPlayer_OnPlayDelegate
} // namespace app::classes::types
