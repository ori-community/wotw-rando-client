#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRSystem_ApplyTransform {
        inline app::IVRSystem_ApplyTransform__Class** type_info = (app::IVRSystem_ApplyTransform__Class**)(modloader::win::memory::resolve_rva(0x04711080));
        inline app::IVRSystem_ApplyTransform__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_ApplyTransform__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_ApplyTransform");
        }
        inline app::IVRSystem_ApplyTransform* create() {
            return il2cpp::create_object<app::IVRSystem_ApplyTransform>(get_class());
        }
    } // namespace IVRSystem_ApplyTransform
} // namespace app::classes::types
