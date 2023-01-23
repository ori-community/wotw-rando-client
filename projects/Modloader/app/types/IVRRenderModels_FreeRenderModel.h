#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IVRRenderModels_FreeRenderModel__Class.h>
#include <Modloader/app/structs/IVRRenderModels_FreeRenderModel.h>

namespace app::classes::types {
    namespace IVRRenderModels_FreeRenderModel {
        inline app::IVRRenderModels_FreeRenderModel__Class** type_info = (app::IVRRenderModels_FreeRenderModel__Class**)(modloader::win::memory::resolve_rva(0x0476DE98));
        inline app::IVRRenderModels_FreeRenderModel__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRRenderModels_FreeRenderModel__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRRenderModels", "_FreeRenderModel");
        }
        inline app::IVRRenderModels_FreeRenderModel* create() {
            return il2cpp::create_object<app::IVRRenderModels_FreeRenderModel>(get_class());
        }
    } // namespace IVRRenderModels_FreeRenderModel
} // namespace app::classes::types
