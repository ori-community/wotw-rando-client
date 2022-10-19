#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SceneLoadingCaptureAgent {
        inline app::SceneLoadingCaptureAgent__Class** type_info = (app::SceneLoadingCaptureAgent__Class**)(modloader::win::memory::resolve_rva(0x0470CE90));
        inline app::SceneLoadingCaptureAgent__Class* get_class() {
            return il2cpp::get_class<app::SceneLoadingCaptureAgent__Class>(type_info, "", "SceneLoadingCaptureAgent");
        }
        inline app::SceneLoadingCaptureAgent* create() {
            return il2cpp::create_object<app::SceneLoadingCaptureAgent>(get_class());
        }
    } // namespace SceneLoadingCaptureAgent
} // namespace app::classes::types
