#pragma once
#include <Modloader/app/structs/RecordingTransformTracker.h>
#include <Modloader/app/structs/RecordingTransformTracker__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RecordingTransformTracker {
        inline app::RecordingTransformTracker__Class** type_info() {
            static app::RecordingTransformTracker__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RecordingTransformTracker__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RecordingTransformTracker__Class* get_class() {
            return il2cpp::get_class<app::RecordingTransformTracker__Class>(type_info(), "", "RecordingTransformTracker");
        }
        inline app::RecordingTransformTracker* create() {
            return il2cpp::create_object<app::RecordingTransformTracker>(get_class());
        }
    } // namespace RecordingTransformTracker
} // namespace app::classes::types
