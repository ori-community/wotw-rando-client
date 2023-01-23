#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RecordingTransformTracker__Class.h>
#include <Modloader/app/structs/RecordingTransformTracker.h>

namespace app::classes::types {
    namespace RecordingTransformTracker {
        namespace {
            inline app::RecordingTransformTracker__Class* type_info_ref = nullptr;
        }
        inline app::RecordingTransformTracker__Class** type_info = &type_info_ref;
        inline app::RecordingTransformTracker__Class* get_class() {
            return il2cpp::get_class<app::RecordingTransformTracker__Class>(type_info, "", "RecordingTransformTracker");
        }
        inline app::RecordingTransformTracker* create() {
            return il2cpp::create_object<app::RecordingTransformTracker>(get_class());
        }
    } // namespace RecordingTransformTracker
} // namespace app::classes::types
