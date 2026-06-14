#pragma once
#include <Modloader/app/structs/IVRSettings_GetString.h>
#include <Modloader/app/structs/IVRSettings_GetString__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRSettings_GetString {
        inline app::IVRSettings_GetString__Class** type_info() {
            static app::IVRSettings_GetString__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRSettings_GetString__Class**)(modloader::win::memory::resolve_rva(0x04765D98));
            }
            return cache;
        }
        inline app::IVRSettings_GetString__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSettings_GetString__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRSettings", "_GetString");
        }
        inline app::IVRSettings_GetString* create() {
            return il2cpp::create_object<app::IVRSettings_GetString>(get_class());
        }
    } // namespace IVRSettings_GetString
} // namespace app::classes::types
