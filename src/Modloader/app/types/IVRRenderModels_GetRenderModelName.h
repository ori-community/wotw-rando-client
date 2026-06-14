#pragma once
#include <Modloader/app/structs/IVRRenderModels_GetRenderModelName.h>
#include <Modloader/app/structs/IVRRenderModels_GetRenderModelName__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRRenderModels_GetRenderModelName {
        inline app::IVRRenderModels_GetRenderModelName__Class** type_info() {
            static app::IVRRenderModels_GetRenderModelName__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRRenderModels_GetRenderModelName__Class**)(modloader::win::memory::resolve_rva(0x04737B58));
            }
            return cache;
        }
        inline app::IVRRenderModels_GetRenderModelName__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRRenderModels_GetRenderModelName__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRRenderModels", "_GetRenderModelName");
        }
        inline app::IVRRenderModels_GetRenderModelName* create() {
            return il2cpp::create_object<app::IVRRenderModels_GetRenderModelName>(get_class());
        }
    } // namespace IVRRenderModels_GetRenderModelName
} // namespace app::classes::types
