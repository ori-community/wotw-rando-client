#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RecordingLogHandler__Class.h>
#include <Modloader/app/structs/RecordingLogHandler.h>

namespace app::classes::types {
    namespace RecordingLogHandler {
        namespace {
            inline app::RecordingLogHandler__Class* type_info_ref = nullptr;
        }
        inline app::RecordingLogHandler__Class** type_info = &type_info_ref;
        inline app::RecordingLogHandler__Class* get_class() {
            return il2cpp::get_class<app::RecordingLogHandler__Class>(type_info, "Moon.ContinuousIntegration", "RecordingLogHandler");
        }
        inline app::RecordingLogHandler* create() {
            return il2cpp::create_object<app::RecordingLogHandler>(get_class());
        }
    } // namespace RecordingLogHandler
} // namespace app::classes::types
