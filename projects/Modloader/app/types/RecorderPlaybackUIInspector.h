#pragma once
#include <Modloader/app/structs/RecorderPlaybackUIInspector.h>
#include <Modloader/app/structs/RecorderPlaybackUIInspector__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RecorderPlaybackUIInspector {
        inline app::RecorderPlaybackUIInspector__Class** type_info() {
            static app::RecorderPlaybackUIInspector__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RecorderPlaybackUIInspector__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RecorderPlaybackUIInspector__Class* get_class() {
            return il2cpp::get_class<app::RecorderPlaybackUIInspector__Class>(type_info(), "", "RecorderPlaybackUIInspector");
        }
        inline app::RecorderPlaybackUIInspector* create() {
            return il2cpp::create_object<app::RecorderPlaybackUIInspector>(get_class());
        }
    } // namespace RecorderPlaybackUIInspector
} // namespace app::classes::types
