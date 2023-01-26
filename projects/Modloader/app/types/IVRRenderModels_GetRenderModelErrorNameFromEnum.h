#pragma once
#include <Modloader/app/structs/IVRRenderModels_GetRenderModelErrorNameFromEnum.h>
#include <Modloader/app/structs/IVRRenderModels_GetRenderModelErrorNameFromEnum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRRenderModels_GetRenderModelErrorNameFromEnum {
        inline app::IVRRenderModels_GetRenderModelErrorNameFromEnum__Class** type_info() {
            static app::IVRRenderModels_GetRenderModelErrorNameFromEnum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRRenderModels_GetRenderModelErrorNameFromEnum__Class**)(modloader::win::memory::resolve_rva(0x04727F18));
            }
            return cache;
        }
        inline app::IVRRenderModels_GetRenderModelErrorNameFromEnum__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRRenderModels_GetRenderModelErrorNameFromEnum__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRRenderModels", "_GetRenderModelErrorNameFromEnum");
        }
        inline app::IVRRenderModels_GetRenderModelErrorNameFromEnum* create() {
            return il2cpp::create_object<app::IVRRenderModels_GetRenderModelErrorNameFromEnum>(get_class());
        }
    } // namespace IVRRenderModels_GetRenderModelErrorNameFromEnum
} // namespace app::classes::types
