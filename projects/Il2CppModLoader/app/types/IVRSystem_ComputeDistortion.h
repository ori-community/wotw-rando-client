#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRSystem_ComputeDistortion {
        inline app::IVRSystem_ComputeDistortion__Class** type_info = (app::IVRSystem_ComputeDistortion__Class**)(modloader::win::memory::resolve_rva(0x0470F4D8));
        inline app::IVRSystem_ComputeDistortion__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_ComputeDistortion__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_ComputeDistortion");
        }
        inline app::IVRSystem_ComputeDistortion* create() {
            return il2cpp::create_object<app::IVRSystem_ComputeDistortion>(get_class());
        }
    } // namespace IVRSystem_ComputeDistortion
} // namespace app::classes::types
