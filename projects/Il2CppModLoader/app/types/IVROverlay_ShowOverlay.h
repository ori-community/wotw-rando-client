#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVROverlay_ShowOverlay {
        inline app::IVROverlay_ShowOverlay__Class** type_info = (app::IVROverlay_ShowOverlay__Class**)(modloader::win::memory::resolve_rva(0x0477CF38));
        inline app::IVROverlay_ShowOverlay__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_ShowOverlay__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_ShowOverlay");
        }
        inline app::IVROverlay_ShowOverlay* create() {
            return il2cpp::create_object<app::IVROverlay_ShowOverlay>(get_class());
        }
    } // namespace IVROverlay_ShowOverlay
} // namespace app::classes::types
