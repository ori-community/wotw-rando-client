#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVROverlay_CreateOverlay {
        inline app::IVROverlay_CreateOverlay__Class** type_info = (app::IVROverlay_CreateOverlay__Class**)(modloader::win::memory::resolve_rva(0x04772940));
        inline app::IVROverlay_CreateOverlay__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_CreateOverlay__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_CreateOverlay");
        }
        inline app::IVROverlay_CreateOverlay* create() {
            return il2cpp::create_object<app::IVROverlay_CreateOverlay>(get_class());
        }
    } // namespace IVROverlay_CreateOverlay
} // namespace app::classes::types
