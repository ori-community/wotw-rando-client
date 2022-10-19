#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CVRRenderModels_GetComponentStatePacked {
        inline app::CVRRenderModels_GetComponentStatePacked__Class** type_info = (app::CVRRenderModels_GetComponentStatePacked__Class**)(modloader::win::memory::resolve_rva(0x04737590));
        inline app::CVRRenderModels_GetComponentStatePacked__Class* get_class() {
            return il2cpp::get_nested_class<app::CVRRenderModels_GetComponentStatePacked__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "CVRRenderModels", "_GetComponentStatePacked");
        }
        inline app::CVRRenderModels_GetComponentStatePacked* create() {
            return il2cpp::create_object<app::CVRRenderModels_GetComponentStatePacked>(get_class());
        }
    } // namespace CVRRenderModels_GetComponentStatePacked
} // namespace app::classes::types
