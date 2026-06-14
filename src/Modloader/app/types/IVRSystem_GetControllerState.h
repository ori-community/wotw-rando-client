#pragma once
#include <Modloader/app/structs/IVRSystem_GetControllerState.h>
#include <Modloader/app/structs/IVRSystem_GetControllerState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRSystem_GetControllerState {
        inline app::IVRSystem_GetControllerState__Class** type_info() {
            static app::IVRSystem_GetControllerState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRSystem_GetControllerState__Class**)(modloader::win::memory::resolve_rva(0x04787820));
            }
            return cache;
        }
        inline app::IVRSystem_GetControllerState__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_GetControllerState__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_GetControllerState");
        }
        inline app::IVRSystem_GetControllerState* create() {
            return il2cpp::create_object<app::IVRSystem_GetControllerState>(get_class());
        }
    } // namespace IVRSystem_GetControllerState
} // namespace app::classes::types
