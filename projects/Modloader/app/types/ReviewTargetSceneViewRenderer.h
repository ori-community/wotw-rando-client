#pragma once
#include <Modloader/app/structs/ReviewTargetSceneViewRenderer.h>
#include <Modloader/app/structs/ReviewTargetSceneViewRenderer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ReviewTargetSceneViewRenderer {
        inline app::ReviewTargetSceneViewRenderer__Class** type_info() {
            static app::ReviewTargetSceneViewRenderer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ReviewTargetSceneViewRenderer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ReviewTargetSceneViewRenderer__Class* get_class() {
            return il2cpp::get_class<app::ReviewTargetSceneViewRenderer__Class>(type_info(), "Moon.ReviewFramework", "ReviewTargetSceneViewRenderer");
        }
        inline app::ReviewTargetSceneViewRenderer* create() {
            return il2cpp::create_object<app::ReviewTargetSceneViewRenderer>(get_class());
        }
    } // namespace ReviewTargetSceneViewRenderer
} // namespace app::classes::types
