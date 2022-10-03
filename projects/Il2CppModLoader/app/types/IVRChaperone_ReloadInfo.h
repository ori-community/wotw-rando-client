#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRChaperone_ReloadInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRChaperone_ReloadInfo__Class** type_info;
        inline app::IVRChaperone_ReloadInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRChaperone_ReloadInfo__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRChaperone", "_ReloadInfo");
        }
        inline app::IVRChaperone_ReloadInfo* create() {
            return il2cpp::create_object<app::IVRChaperone_ReloadInfo>(get_class());
        }
    } // namespace IVRChaperone_ReloadInfo
} // namespace app::classes::types
