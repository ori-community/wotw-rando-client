#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SceneDataCaptureAgent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SceneDataCaptureAgent__Class** type_info;
        inline app::SceneDataCaptureAgent__Class* get_class() {
            return il2cpp::get_class<app::SceneDataCaptureAgent__Class>(type_info, "", "SceneDataCaptureAgent");
        }
        inline app::SceneDataCaptureAgent* create() {
            return il2cpp::create_object<app::SceneDataCaptureAgent>(get_class());
        }
    } // namespace SceneDataCaptureAgent
} // namespace app::classes::types
