#pragma once
#include <Modloader/app/structs/IVRResources_GetResourceFullPath.h>
#include <Modloader/app/structs/IVRResources_GetResourceFullPath__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRResources_GetResourceFullPath {
        inline app::IVRResources_GetResourceFullPath__Class** type_info() {
            static app::IVRResources_GetResourceFullPath__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRResources_GetResourceFullPath__Class**)(modloader::win::memory::resolve_rva(0x04792AA8));
            }
            return cache;
        }
        inline app::IVRResources_GetResourceFullPath__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRResources_GetResourceFullPath__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRResources", "_GetResourceFullPath");
        }
        inline app::IVRResources_GetResourceFullPath* create() {
            return il2cpp::create_object<app::IVRResources_GetResourceFullPath>(get_class());
        }
    } // namespace IVRResources_GetResourceFullPath
} // namespace app::classes::types
