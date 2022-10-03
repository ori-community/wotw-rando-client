#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRChaperone_AreBoundsVisible {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRChaperone_AreBoundsVisible__Class** type_info;
        inline app::IVRChaperone_AreBoundsVisible__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRChaperone_AreBoundsVisible__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRChaperone", "_AreBoundsVisible");
        }
        inline app::IVRChaperone_AreBoundsVisible* create() {
            return il2cpp::create_object<app::IVRChaperone_AreBoundsVisible>(get_class());
        }
    } // namespace IVRChaperone_AreBoundsVisible
} // namespace app::classes::types
