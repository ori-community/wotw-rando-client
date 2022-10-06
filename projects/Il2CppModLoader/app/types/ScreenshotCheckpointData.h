#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ScreenshotCheckpointData {
        namespace {
            app::ScreenshotCheckpointData__Class* type_info_ref = nullptr;
        }
        app::ScreenshotCheckpointData__Class** type_info = &type_info_ref;
        inline app::ScreenshotCheckpointData__Class* get_class() {
            return il2cpp::get_class<app::ScreenshotCheckpointData__Class>(type_info, "", "ScreenshotCheckpointData");
        }
        inline app::ScreenshotCheckpointData* create() {
            return il2cpp::create_object<app::ScreenshotCheckpointData>(get_class());
        }
        inline app::ScreenshotCheckpointData__Array* create_array(int size) {
            return il2cpp::array_new<app::ScreenshotCheckpointData__Array>(get_class(), size);
        }
        inline app::ScreenshotCheckpointData__Array* create_array(const std::vector<app::ScreenshotCheckpointData*>& items) {
            return il2cpp::array_new<app::ScreenshotCheckpointData__Array>(get_class(), items);
        }
    } // namespace ScreenshotCheckpointData
} // namespace app::classes::types
