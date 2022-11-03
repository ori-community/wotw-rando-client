#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UWPVideoPlayer_OnPlayDelegate {
        namespace {
            inline app::UWPVideoPlayer_OnPlayDelegate__Class* type_info_ref = nullptr;
        }
        inline app::UWPVideoPlayer_OnPlayDelegate__Class** type_info = &type_info_ref;
        inline app::UWPVideoPlayer_OnPlayDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::UWPVideoPlayer_OnPlayDelegate__Class>(type_info, "", "UWPVideoPlayer", "OnPlayDelegate");
        }
        inline app::UWPVideoPlayer_OnPlayDelegate* create() {
            return il2cpp::create_object<app::UWPVideoPlayer_OnPlayDelegate>(get_class());
        }
    } // namespace UWPVideoPlayer_OnPlayDelegate
} // namespace app::classes::types
