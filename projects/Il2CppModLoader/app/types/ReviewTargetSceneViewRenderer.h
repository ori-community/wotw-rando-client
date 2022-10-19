#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ReviewTargetSceneViewRenderer {
        namespace {
            inline app::ReviewTargetSceneViewRenderer__Class* type_info_ref = nullptr;
        }
        inline app::ReviewTargetSceneViewRenderer__Class** type_info = &type_info_ref;
        inline app::ReviewTargetSceneViewRenderer__Class* get_class() {
            return il2cpp::get_class<app::ReviewTargetSceneViewRenderer__Class>(type_info, "Moon.ReviewFramework", "ReviewTargetSceneViewRenderer");
        }
        inline app::ReviewTargetSceneViewRenderer* create() {
            return il2cpp::create_object<app::ReviewTargetSceneViewRenderer>(get_class());
        }
    } // namespace ReviewTargetSceneViewRenderer
} // namespace app::classes::types
