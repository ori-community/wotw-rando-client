#pragma once
#include <Modloader/app/structs/SceneScreenshot_BackgroundSceneMoveData__Array.h>
#include <Modloader/app/structs/SceneScreenshot_BackgroundSceneMoveData__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneScreenshot_BackgroundSceneMoveData__Array {
        inline app::SceneScreenshot_BackgroundSceneMoveData__Array__Class** type_info() {
            static app::SceneScreenshot_BackgroundSceneMoveData__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SceneScreenshot_BackgroundSceneMoveData__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SceneScreenshot_BackgroundSceneMoveData__Array__Class* get_class() {
            return il2cpp::get_class<app::SceneScreenshot_BackgroundSceneMoveData__Array__Class>(type_info(), "", "SceneScreenshot+BackgroundSceneMoveData[]");
        }
        inline app::SceneScreenshot_BackgroundSceneMoveData__Array* create() {
            return il2cpp::create_object<app::SceneScreenshot_BackgroundSceneMoveData__Array>(get_class());
        }
    } // namespace SceneScreenshot_BackgroundSceneMoveData__Array
} // namespace app::classes::types
