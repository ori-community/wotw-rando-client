#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRRenderModels_GetRenderModelErrorNameFromEnum {
        inline app::IVRRenderModels_GetRenderModelErrorNameFromEnum__Class** type_info = (app::IVRRenderModels_GetRenderModelErrorNameFromEnum__Class**)(modloader::win::memory::resolve_rva(0x04727F18));
        inline app::IVRRenderModels_GetRenderModelErrorNameFromEnum__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRRenderModels_GetRenderModelErrorNameFromEnum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRRenderModels", "_GetRenderModelErrorNameFromEnum");
        }
        inline app::IVRRenderModels_GetRenderModelErrorNameFromEnum* create() {
            return il2cpp::create_object<app::IVRRenderModels_GetRenderModelErrorNameFromEnum>(get_class());
        }
    } // namespace IVRRenderModels_GetRenderModelErrorNameFromEnum
} // namespace app::classes::types
