#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GhostRecorder_GhostPluginRecordingType__Enum {
        namespace {
            inline app::GhostRecorder_GhostPluginRecordingType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::GhostRecorder_GhostPluginRecordingType__Enum__Class** type_info = &type_info_ref;
        inline app::GhostRecorder_GhostPluginRecordingType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::GhostRecorder_GhostPluginRecordingType__Enum__Class>(type_info, "", "GhostRecorder", "GhostPluginRecordingType");
        }
        inline app::GhostRecorder_GhostPluginRecordingType__Enum* create() {
            return il2cpp::create_object<app::GhostRecorder_GhostPluginRecordingType__Enum>(get_class());
        }
    } // namespace GhostRecorder_GhostPluginRecordingType__Enum
} // namespace app::classes::types
