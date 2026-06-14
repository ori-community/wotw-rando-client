#pragma once
#include <Modloader/app/structs/IVRSettings_SetBool.h>
#include <Modloader/app/structs/IVRSettings_SetBool__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRSettings_SetBool {
        inline app::IVRSettings_SetBool__Class** type_info() {
            static app::IVRSettings_SetBool__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRSettings_SetBool__Class**)(modloader::win::memory::resolve_rva(0x04782858));
            }
            return cache;
        }
        inline app::IVRSettings_SetBool__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSettings_SetBool__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRSettings", "_SetBool");
        }
        inline app::IVRSettings_SetBool* create() {
            return il2cpp::create_object<app::IVRSettings_SetBool>(get_class());
        }
    } // namespace IVRSettings_SetBool
} // namespace app::classes::types
