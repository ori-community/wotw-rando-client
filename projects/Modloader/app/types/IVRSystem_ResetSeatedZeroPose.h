#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRSystem_ResetSeatedZeroPose {
        inline app::IVRSystem_ResetSeatedZeroPose__Class** type_info = (app::IVRSystem_ResetSeatedZeroPose__Class**)(modloader::win::memory::resolve_rva(0x047955C0));
        inline app::IVRSystem_ResetSeatedZeroPose__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_ResetSeatedZeroPose__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_ResetSeatedZeroPose");
        }
        inline app::IVRSystem_ResetSeatedZeroPose* create() {
            return il2cpp::create_object<app::IVRSystem_ResetSeatedZeroPose>(get_class());
        }
    } // namespace IVRSystem_ResetSeatedZeroPose
} // namespace app::classes::types
