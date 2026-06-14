#pragma once
#include <Modloader/app/structs/ScreenshotCheckpointData__Array.h>
#include <Modloader/app/structs/ScreenshotCheckpointData__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScreenshotCheckpointData__Array {
        inline app::ScreenshotCheckpointData__Array__Class** type_info() {
            static app::ScreenshotCheckpointData__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ScreenshotCheckpointData__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ScreenshotCheckpointData__Array__Class* get_class() {
            return il2cpp::get_class<app::ScreenshotCheckpointData__Array__Class>(type_info(), "", "ScreenshotCheckpointData[]");
        }
        inline app::ScreenshotCheckpointData__Array* create() {
            return il2cpp::create_object<app::ScreenshotCheckpointData__Array>(get_class());
        }
    } // namespace ScreenshotCheckpointData__Array
} // namespace app::classes::types
