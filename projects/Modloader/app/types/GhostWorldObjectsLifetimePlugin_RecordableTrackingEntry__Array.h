#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry__Array__Class.h>
#include <Modloader/app/structs/GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry__Array.h>

namespace app::classes::types {
    namespace GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry__Array {
        namespace {
            inline app::GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry__Array__Class* type_info_ref = nullptr;
        }
        inline app::GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry__Array__Class** type_info = &type_info_ref;
        inline app::GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry__Array__Class>(type_info, "", "GhostWorldObjectsLifetimePlugin+RecordableTrackingEntry[]");
        }
        inline app::GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry__Array* create() {
            return il2cpp::create_object<app::GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry__Array>(get_class());
        }
    } // namespace GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry__Array
} // namespace app::classes::types
