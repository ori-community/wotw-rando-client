#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RecorderPlaybackUIInspector {
        namespace {
            app::RecorderPlaybackUIInspector__Class* type_info_ref = nullptr;
        }
        app::RecorderPlaybackUIInspector__Class** type_info = &type_info_ref;
        inline app::RecorderPlaybackUIInspector__Class* get_class() {
            return il2cpp::get_class<app::RecorderPlaybackUIInspector__Class>(type_info, "", "RecorderPlaybackUIInspector");
        }
        inline app::RecorderPlaybackUIInspector* create() {
            return il2cpp::create_object<app::RecorderPlaybackUIInspector>(get_class());
        }
    } // namespace RecorderPlaybackUIInspector
} // namespace app::classes::types
