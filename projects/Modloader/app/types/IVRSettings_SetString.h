#pragma once
#include <Modloader/app/structs/IVRSettings_SetString.h>
#include <Modloader/app/structs/IVRSettings_SetString__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRSettings_SetString {
        inline app::IVRSettings_SetString__Class** type_info() {
            static app::IVRSettings_SetString__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRSettings_SetString__Class**)(modloader::win::memory::resolve_rva(0x047885F8));
            }
            return cache;
        }
        inline app::IVRSettings_SetString__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSettings_SetString__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRSettings", "_SetString");
        }
        inline app::IVRSettings_SetString* create() {
            return il2cpp::create_object<app::IVRSettings_SetString>(get_class());
        }
    } // namespace IVRSettings_SetString
} // namespace app::classes::types
