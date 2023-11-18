#pragma once
#include <Modloader/app/structs/IVRChaperone_GetBoundsColor.h>
#include <Modloader/app/structs/IVRChaperone_GetBoundsColor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRChaperone_GetBoundsColor {
        inline app::IVRChaperone_GetBoundsColor__Class** type_info() {
            static app::IVRChaperone_GetBoundsColor__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRChaperone_GetBoundsColor__Class**)(modloader::win::memory::resolve_rva(0x04790898));
            }
            return cache;
        }
        inline app::IVRChaperone_GetBoundsColor__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRChaperone_GetBoundsColor__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRChaperone", "_GetBoundsColor");
        }
        inline app::IVRChaperone_GetBoundsColor* create() {
            return il2cpp::create_object<app::IVRChaperone_GetBoundsColor>(get_class());
        }
    } // namespace IVRChaperone_GetBoundsColor
} // namespace app::classes::types
