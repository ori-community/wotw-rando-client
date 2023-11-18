#pragma once
#include <Modloader/app/structs/IVRRenderModels_RenderModelHasComponent.h>
#include <Modloader/app/structs/IVRRenderModels_RenderModelHasComponent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRRenderModels_RenderModelHasComponent {
        inline app::IVRRenderModels_RenderModelHasComponent__Class** type_info() {
            static app::IVRRenderModels_RenderModelHasComponent__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRRenderModels_RenderModelHasComponent__Class**)(modloader::win::memory::resolve_rva(0x047089C0));
            }
            return cache;
        }
        inline app::IVRRenderModels_RenderModelHasComponent__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRRenderModels_RenderModelHasComponent__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRRenderModels", "_RenderModelHasComponent");
        }
        inline app::IVRRenderModels_RenderModelHasComponent* create() {
            return il2cpp::create_object<app::IVRRenderModels_RenderModelHasComponent>(get_class());
        }
    } // namespace IVRRenderModels_RenderModelHasComponent
} // namespace app::classes::types
