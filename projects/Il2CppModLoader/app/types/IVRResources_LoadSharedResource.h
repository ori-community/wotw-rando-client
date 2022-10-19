#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRResources_LoadSharedResource {
        inline app::IVRResources_LoadSharedResource__Class** type_info = (app::IVRResources_LoadSharedResource__Class**)(modloader::win::memory::resolve_rva(0x0470F940));
        inline app::IVRResources_LoadSharedResource__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRResources_LoadSharedResource__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRResources", "_LoadSharedResource");
        }
        inline app::IVRResources_LoadSharedResource* create() {
            return il2cpp::create_object<app::IVRResources_LoadSharedResource>(get_class());
        }
    } // namespace IVRResources_LoadSharedResource
} // namespace app::classes::types
