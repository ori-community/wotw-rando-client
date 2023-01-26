#pragma once
#include <Modloader/app/structs/IVRSystem_GetProjectionRaw.h>
#include <Modloader/app/structs/IVRSystem_GetProjectionRaw__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRSystem_GetProjectionRaw {
        inline app::IVRSystem_GetProjectionRaw__Class** type_info() {
            static app::IVRSystem_GetProjectionRaw__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRSystem_GetProjectionRaw__Class**)(modloader::win::memory::resolve_rva(0x04749650));
            }
            return cache;
        }
        inline app::IVRSystem_GetProjectionRaw__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_GetProjectionRaw__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_GetProjectionRaw");
        }
        inline app::IVRSystem_GetProjectionRaw* create() {
            return il2cpp::create_object<app::IVRSystem_GetProjectionRaw>(get_class());
        }
    } // namespace IVRSystem_GetProjectionRaw
} // namespace app::classes::types
