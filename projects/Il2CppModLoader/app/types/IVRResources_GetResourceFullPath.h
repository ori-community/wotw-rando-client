#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRResources_GetResourceFullPath {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRResources_GetResourceFullPath__Class** type_info;
        inline app::IVRResources_GetResourceFullPath__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRResources_GetResourceFullPath__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRResources", "_GetResourceFullPath");
        }
        inline app::IVRResources_GetResourceFullPath* create() {
            return il2cpp::create_object<app::IVRResources_GetResourceFullPath>(get_class());
        }
    } // namespace IVRResources_GetResourceFullPath
} // namespace app::classes::types
