#pragma once
#include <Modloader/app/structs/GhostRecorder_GhostPluginRecordingType__Enum.h>
#include <Modloader/app/structs/GhostRecorder_GhostPluginRecordingType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GhostRecorder_GhostPluginRecordingType__Enum {
        inline app::GhostRecorder_GhostPluginRecordingType__Enum__Class** type_info() {
            static app::GhostRecorder_GhostPluginRecordingType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GhostRecorder_GhostPluginRecordingType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GhostRecorder_GhostPluginRecordingType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::GhostRecorder_GhostPluginRecordingType__Enum__Class>(type_info(), "", "GhostRecorder", "GhostPluginRecordingType");
        }
        inline app::GhostRecorder_GhostPluginRecordingType__Enum* create() {
            return il2cpp::create_object<app::GhostRecorder_GhostPluginRecordingType__Enum>(get_class());
        }
    } // namespace GhostRecorder_GhostPluginRecordingType__Enum
} // namespace app::classes::types
