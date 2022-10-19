#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRChaperone_GetBoundsColor {
        inline app::IVRChaperone_GetBoundsColor__Class** type_info = (app::IVRChaperone_GetBoundsColor__Class**)(modloader::win::memory::resolve_rva(0x04790898));
        inline app::IVRChaperone_GetBoundsColor__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRChaperone_GetBoundsColor__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRChaperone", "_GetBoundsColor");
        }
        inline app::IVRChaperone_GetBoundsColor* create() {
            return il2cpp::create_object<app::IVRChaperone_GetBoundsColor>(get_class());
        }
    } // namespace IVRChaperone_GetBoundsColor
} // namespace app::classes::types
