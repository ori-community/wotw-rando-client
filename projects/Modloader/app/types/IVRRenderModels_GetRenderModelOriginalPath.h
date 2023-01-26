#pragma once
#include <Modloader/app/structs/IVRRenderModels_GetRenderModelOriginalPath.h>
#include <Modloader/app/structs/IVRRenderModels_GetRenderModelOriginalPath__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRRenderModels_GetRenderModelOriginalPath {
        inline app::IVRRenderModels_GetRenderModelOriginalPath__Class** type_info() {
            static app::IVRRenderModels_GetRenderModelOriginalPath__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRRenderModels_GetRenderModelOriginalPath__Class**)(modloader::win::memory::resolve_rva(0x04708F48));
            }
            return cache;
        }
        inline app::IVRRenderModels_GetRenderModelOriginalPath__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRRenderModels_GetRenderModelOriginalPath__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRRenderModels", "_GetRenderModelOriginalPath");
        }
        inline app::IVRRenderModels_GetRenderModelOriginalPath* create() {
            return il2cpp::create_object<app::IVRRenderModels_GetRenderModelOriginalPath>(get_class());
        }
    } // namespace IVRRenderModels_GetRenderModelOriginalPath
} // namespace app::classes::types
