#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RecorderPlaybackUIInspector__Class.h>
#include <Modloader/app/structs/RecorderPlaybackUIInspector.h>

namespace app::classes::types {
    namespace RecorderPlaybackUIInspector {
        namespace {
            inline app::RecorderPlaybackUIInspector__Class* type_info_ref = nullptr;
        }
        inline app::RecorderPlaybackUIInspector__Class** type_info = &type_info_ref;
        inline app::RecorderPlaybackUIInspector__Class* get_class() {
            return il2cpp::get_class<app::RecorderPlaybackUIInspector__Class>(type_info, "", "RecorderPlaybackUIInspector");
        }
        inline app::RecorderPlaybackUIInspector* create() {
            return il2cpp::create_object<app::RecorderPlaybackUIInspector>(get_class());
        }
    } // namespace RecorderPlaybackUIInspector
} // namespace app::classes::types
