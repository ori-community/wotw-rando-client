#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IVRRenderModels_GetRenderModelCount__Class.h>
#include <Modloader/app/structs/IVRRenderModels_GetRenderModelCount.h>

namespace app::classes::types {
    namespace IVRRenderModels_GetRenderModelCount {
        inline app::IVRRenderModels_GetRenderModelCount__Class** type_info = (app::IVRRenderModels_GetRenderModelCount__Class**)(modloader::win::memory::resolve_rva(0x04701B38));
        inline app::IVRRenderModels_GetRenderModelCount__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRRenderModels_GetRenderModelCount__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRRenderModels", "_GetRenderModelCount");
        }
        inline app::IVRRenderModels_GetRenderModelCount* create() {
            return il2cpp::create_object<app::IVRRenderModels_GetRenderModelCount>(get_class());
        }
    } // namespace IVRRenderModels_GetRenderModelCount
} // namespace app::classes::types
