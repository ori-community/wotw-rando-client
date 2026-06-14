#pragma once
#include <Modloader/app/structs/RecorderPlaybackUI_Start_d_50.h>
#include <Modloader/app/structs/RecorderPlaybackUI_Start_d_50__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RecorderPlaybackUI_Start_d_50 {
        inline app::RecorderPlaybackUI_Start_d_50__Class** type_info() {
            static app::RecorderPlaybackUI_Start_d_50__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RecorderPlaybackUI_Start_d_50__Class**)(modloader::win::memory::resolve_rva(0x0472AF58));
            }
            return cache;
        }
        inline app::RecorderPlaybackUI_Start_d_50__Class* get_class() {
            return il2cpp::get_nested_class<app::RecorderPlaybackUI_Start_d_50__Class>(type_info(), "", "RecorderPlaybackUI", "<Start>d__50");
        }
        inline app::RecorderPlaybackUI_Start_d_50* create() {
            return il2cpp::create_object<app::RecorderPlaybackUI_Start_d_50>(get_class());
        }
    } // namespace RecorderPlaybackUI_Start_d_50
} // namespace app::classes::types
