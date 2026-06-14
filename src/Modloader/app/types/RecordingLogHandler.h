#pragma once
#include <Modloader/app/structs/RecordingLogHandler.h>
#include <Modloader/app/structs/RecordingLogHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RecordingLogHandler {
        inline app::RecordingLogHandler__Class** type_info() {
            static app::RecordingLogHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RecordingLogHandler__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RecordingLogHandler__Class* get_class() {
            return il2cpp::get_class<app::RecordingLogHandler__Class>(type_info(), "Moon.ContinuousIntegration", "RecordingLogHandler");
        }
        inline app::RecordingLogHandler* create() {
            return il2cpp::create_object<app::RecordingLogHandler>(get_class());
        }
    } // namespace RecordingLogHandler
} // namespace app::classes::types
