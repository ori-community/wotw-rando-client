#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRSystem_GetProjectionMatrix {
        inline app::IVRSystem_GetProjectionMatrix__Class** type_info = (app::IVRSystem_GetProjectionMatrix__Class**)(modloader::win::memory::resolve_rva(0x04789390));
        inline app::IVRSystem_GetProjectionMatrix__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_GetProjectionMatrix__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_GetProjectionMatrix");
        }
        inline app::IVRSystem_GetProjectionMatrix* create() {
            return il2cpp::create_object<app::IVRSystem_GetProjectionMatrix>(get_class());
        }
    } // namespace IVRSystem_GetProjectionMatrix
} // namespace app::classes::types
