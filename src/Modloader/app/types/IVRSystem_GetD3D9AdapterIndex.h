#pragma once
#include <Modloader/app/structs/IVRSystem_GetD3D9AdapterIndex.h>
#include <Modloader/app/structs/IVRSystem_GetD3D9AdapterIndex__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRSystem_GetD3D9AdapterIndex {
        inline app::IVRSystem_GetD3D9AdapterIndex__Class** type_info() {
            static app::IVRSystem_GetD3D9AdapterIndex__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRSystem_GetD3D9AdapterIndex__Class**)(modloader::win::memory::resolve_rva(0x047556F0));
            }
            return cache;
        }
        inline app::IVRSystem_GetD3D9AdapterIndex__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_GetD3D9AdapterIndex__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_GetD3D9AdapterIndex");
        }
        inline app::IVRSystem_GetD3D9AdapterIndex* create() {
            return il2cpp::create_object<app::IVRSystem_GetD3D9AdapterIndex>(get_class());
        }
    } // namespace IVRSystem_GetD3D9AdapterIndex
} // namespace app::classes::types
