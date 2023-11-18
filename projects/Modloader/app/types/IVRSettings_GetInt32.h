#pragma once
#include <Modloader/app/structs/IVRSettings_GetInt32.h>
#include <Modloader/app/structs/IVRSettings_GetInt32__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRSettings_GetInt32 {
        inline app::IVRSettings_GetInt32__Class** type_info() {
            static app::IVRSettings_GetInt32__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRSettings_GetInt32__Class**)(modloader::win::memory::resolve_rva(0x04768310));
            }
            return cache;
        }
        inline app::IVRSettings_GetInt32__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSettings_GetInt32__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRSettings", "_GetInt32");
        }
        inline app::IVRSettings_GetInt32* create() {
            return il2cpp::create_object<app::IVRSettings_GetInt32>(get_class());
        }
    } // namespace IVRSettings_GetInt32
} // namespace app::classes::types
