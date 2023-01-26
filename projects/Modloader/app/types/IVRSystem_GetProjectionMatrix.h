#pragma once
#include <Modloader/app/structs/IVRSystem_GetProjectionMatrix.h>
#include <Modloader/app/structs/IVRSystem_GetProjectionMatrix__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRSystem_GetProjectionMatrix {
        inline app::IVRSystem_GetProjectionMatrix__Class** type_info() {
            static app::IVRSystem_GetProjectionMatrix__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRSystem_GetProjectionMatrix__Class**)(modloader::win::memory::resolve_rva(0x04789390));
            }
            return cache;
        }
        inline app::IVRSystem_GetProjectionMatrix__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_GetProjectionMatrix__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_GetProjectionMatrix");
        }
        inline app::IVRSystem_GetProjectionMatrix* create() {
            return il2cpp::create_object<app::IVRSystem_GetProjectionMatrix>(get_class());
        }
    } // namespace IVRSystem_GetProjectionMatrix
} // namespace app::classes::types
