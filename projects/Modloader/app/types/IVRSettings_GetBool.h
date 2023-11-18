#pragma once
#include <Modloader/app/structs/IVRSettings_GetBool.h>
#include <Modloader/app/structs/IVRSettings_GetBool__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRSettings_GetBool {
        inline app::IVRSettings_GetBool__Class** type_info() {
            static app::IVRSettings_GetBool__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRSettings_GetBool__Class**)(modloader::win::memory::resolve_rva(0x04762200));
            }
            return cache;
        }
        inline app::IVRSettings_GetBool__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSettings_GetBool__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRSettings", "_GetBool");
        }
        inline app::IVRSettings_GetBool* create() {
            return il2cpp::create_object<app::IVRSettings_GetBool>(get_class());
        }
    } // namespace IVRSettings_GetBool
} // namespace app::classes::types
