#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVROverlay {
        inline app::IVROverlay__Class** type_info = (app::IVROverlay__Class**)(modloader::win::memory::resolve_rva(0x047460D0));
        inline app::IVROverlay__Class* get_class() {
            return il2cpp::get_class<app::IVROverlay__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay");
        }
        inline app::IVROverlay* create() {
            return il2cpp::create_object<app::IVROverlay>(get_class());
        }
        inline app::IVROverlay__Boxed* box(app::IVROverlay value) {
            return il2cpp::box_value<app::IVROverlay__Boxed>(get_class(), value);
        }
    } // namespace IVROverlay
} // namespace app::classes::types
