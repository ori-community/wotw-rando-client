#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SceneScreenshot_BackgroundSceneMoveData__Array {
        namespace {
            inline app::SceneScreenshot_BackgroundSceneMoveData__Array__Class* type_info_ref = nullptr;
        }
        inline app::SceneScreenshot_BackgroundSceneMoveData__Array__Class** type_info = &type_info_ref;
        inline app::SceneScreenshot_BackgroundSceneMoveData__Array__Class* get_class() {
            return il2cpp::get_class<app::SceneScreenshot_BackgroundSceneMoveData__Array__Class>(type_info, "", "SceneScreenshot+BackgroundSceneMoveData[]");
        }
        inline app::SceneScreenshot_BackgroundSceneMoveData__Array* create() {
            return il2cpp::create_object<app::SceneScreenshot_BackgroundSceneMoveData__Array>(get_class());
        }
    } // namespace SceneScreenshot_BackgroundSceneMoveData__Array
} // namespace app::classes::types
