#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRRenderModels_RenderModelHasComponent {
        inline app::IVRRenderModels_RenderModelHasComponent__Class** type_info = (app::IVRRenderModels_RenderModelHasComponent__Class**)(modloader::win::memory::resolve_rva(0x047089C0));
        inline app::IVRRenderModels_RenderModelHasComponent__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRRenderModels_RenderModelHasComponent__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRRenderModels", "_RenderModelHasComponent");
        }
        inline app::IVRRenderModels_RenderModelHasComponent* create() {
            return il2cpp::create_object<app::IVRRenderModels_RenderModelHasComponent>(get_class());
        }
    } // namespace IVRRenderModels_RenderModelHasComponent
} // namespace app::classes::types
