#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRResources_LoadSharedResource {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRResources_LoadSharedResource__Class** type_info;
        inline app::IVRResources_LoadSharedResource__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRResources_LoadSharedResource__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRResources", "_LoadSharedResource");
        }
        inline app::IVRResources_LoadSharedResource* create() {
            return il2cpp::create_object<app::IVRResources_LoadSharedResource>(get_class());
        }
    } // namespace IVRResources_LoadSharedResource
} // namespace app::classes::types
