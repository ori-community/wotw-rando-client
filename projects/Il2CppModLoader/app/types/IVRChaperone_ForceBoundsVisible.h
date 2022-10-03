#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRChaperone_ForceBoundsVisible {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRChaperone_ForceBoundsVisible__Class** type_info;
        inline app::IVRChaperone_ForceBoundsVisible__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRChaperone_ForceBoundsVisible__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRChaperone", "_ForceBoundsVisible");
        }
        inline app::IVRChaperone_ForceBoundsVisible* create() {
            return il2cpp::create_object<app::IVRChaperone_ForceBoundsVisible>(get_class());
        }
    } // namespace IVRChaperone_ForceBoundsVisible
} // namespace app::classes::types
