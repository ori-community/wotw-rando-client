#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ScreenshotCheckpointData__Array {
        namespace {
            app::ScreenshotCheckpointData__Array__Class* type_info_ref = nullptr;
        }
        app::ScreenshotCheckpointData__Array__Class** type_info = &type_info_ref;
        inline app::ScreenshotCheckpointData__Array__Class* get_class() {
            return il2cpp::get_class<app::ScreenshotCheckpointData__Array__Class>(type_info, "", "ScreenshotCheckpointData[]");
        }
        inline app::ScreenshotCheckpointData__Array* create() {
            return il2cpp::create_object<app::ScreenshotCheckpointData__Array>(get_class());
        }
    } // namespace ScreenshotCheckpointData__Array
} // namespace app::classes::types
