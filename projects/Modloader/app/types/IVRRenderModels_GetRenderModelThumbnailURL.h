#pragma once
#include <Modloader/app/structs/IVRRenderModels_GetRenderModelThumbnailURL.h>
#include <Modloader/app/structs/IVRRenderModels_GetRenderModelThumbnailURL__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRRenderModels_GetRenderModelThumbnailURL {
        inline app::IVRRenderModels_GetRenderModelThumbnailURL__Class** type_info() {
            static app::IVRRenderModels_GetRenderModelThumbnailURL__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRRenderModels_GetRenderModelThumbnailURL__Class**)(modloader::win::memory::resolve_rva(0x04724D78));
            }
            return cache;
        }
        inline app::IVRRenderModels_GetRenderModelThumbnailURL__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRRenderModels_GetRenderModelThumbnailURL__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRRenderModels", "_GetRenderModelThumbnailURL");
        }
        inline app::IVRRenderModels_GetRenderModelThumbnailURL* create() {
            return il2cpp::create_object<app::IVRRenderModels_GetRenderModelThumbnailURL>(get_class());
        }
    } // namespace IVRRenderModels_GetRenderModelThumbnailURL
} // namespace app::classes::types
