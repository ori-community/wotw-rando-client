#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRCompositor_GetLastPoses {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRCompositor_GetLastPoses__Class** type_info;
        inline app::IVRCompositor_GetLastPoses__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_GetLastPoses__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_GetLastPoses");
        }
        inline app::IVRCompositor_GetLastPoses* create() {
            return il2cpp::create_object<app::IVRCompositor_GetLastPoses>(get_class());
        }
    } // namespace IVRCompositor_GetLastPoses
} // namespace app::classes::types
