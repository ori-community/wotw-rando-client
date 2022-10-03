#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRSystem_GetD3D9AdapterIndex {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRSystem_GetD3D9AdapterIndex__Class** type_info;
        inline app::IVRSystem_GetD3D9AdapterIndex__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_GetD3D9AdapterIndex__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_GetD3D9AdapterIndex");
        }
        inline app::IVRSystem_GetD3D9AdapterIndex* create() {
            return il2cpp::create_object<app::IVRSystem_GetD3D9AdapterIndex>(get_class());
        }
    } // namespace IVRSystem_GetD3D9AdapterIndex
} // namespace app::classes::types
