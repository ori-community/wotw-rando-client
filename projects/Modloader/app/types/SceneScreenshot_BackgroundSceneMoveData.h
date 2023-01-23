#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SceneScreenshot_BackgroundSceneMoveData__Class.h>
#include <Modloader/app/structs/SceneScreenshot_BackgroundSceneMoveData.h>
#include <Modloader/app/structs/SceneScreenshot_BackgroundSceneMoveData__Array.h>

namespace app::classes::types {
    namespace SceneScreenshot_BackgroundSceneMoveData {
        namespace {
            inline app::SceneScreenshot_BackgroundSceneMoveData__Class* type_info_ref = nullptr;
        }
        inline app::SceneScreenshot_BackgroundSceneMoveData__Class** type_info = &type_info_ref;
        inline app::SceneScreenshot_BackgroundSceneMoveData__Class* get_class() {
            return il2cpp::get_nested_class<app::SceneScreenshot_BackgroundSceneMoveData__Class>(type_info, "", "SceneScreenshot", "BackgroundSceneMoveData");
        }
        inline app::SceneScreenshot_BackgroundSceneMoveData* create() {
            return il2cpp::create_object<app::SceneScreenshot_BackgroundSceneMoveData>(get_class());
        }
        inline app::SceneScreenshot_BackgroundSceneMoveData__Array* create_array(int size) {
            return il2cpp::array_new<app::SceneScreenshot_BackgroundSceneMoveData__Array>(get_class(), size);
        }
        inline app::SceneScreenshot_BackgroundSceneMoveData__Array* create_array(const std::vector<app::SceneScreenshot_BackgroundSceneMoveData*>& items) {
            return il2cpp::array_new<app::SceneScreenshot_BackgroundSceneMoveData__Array>(get_class(), items);
        }
    } // namespace SceneScreenshot_BackgroundSceneMoveData
} // namespace app::classes::types
