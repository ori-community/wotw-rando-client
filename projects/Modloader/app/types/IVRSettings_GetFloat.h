#pragma once
#include <Modloader/app/structs/IVRSettings_GetFloat.h>
#include <Modloader/app/structs/IVRSettings_GetFloat__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRSettings_GetFloat {
        inline app::IVRSettings_GetFloat__Class** type_info() {
            static app::IVRSettings_GetFloat__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRSettings_GetFloat__Class**)(modloader::win::memory::resolve_rva(0x047871C0));
            }
            return cache;
        }
        inline app::IVRSettings_GetFloat__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSettings_GetFloat__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRSettings", "_GetFloat");
        }
        inline app::IVRSettings_GetFloat* create() {
            return il2cpp::create_object<app::IVRSettings_GetFloat>(get_class());
        }
    } // namespace IVRSettings_GetFloat
} // namespace app::classes::types
