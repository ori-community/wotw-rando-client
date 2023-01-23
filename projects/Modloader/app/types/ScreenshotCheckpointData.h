#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ScreenshotCheckpointData__Class.h>
#include <Modloader/app/structs/ScreenshotCheckpointData.h>
#include <Modloader/app/structs/ScreenshotCheckpointData__Array.h>

namespace app::classes::types {
    namespace ScreenshotCheckpointData {
        namespace {
            inline app::ScreenshotCheckpointData__Class* type_info_ref = nullptr;
        }
        inline app::ScreenshotCheckpointData__Class** type_info = &type_info_ref;
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
