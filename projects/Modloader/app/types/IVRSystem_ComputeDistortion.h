#pragma once
#include <Modloader/app/structs/IVRSystem_ComputeDistortion.h>
#include <Modloader/app/structs/IVRSystem_ComputeDistortion__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRSystem_ComputeDistortion {
        inline app::IVRSystem_ComputeDistortion__Class** type_info() {
            static app::IVRSystem_ComputeDistortion__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRSystem_ComputeDistortion__Class**)(modloader::win::memory::resolve_rva(0x0470F4D8));
            }
            return cache;
        }
        inline app::IVRSystem_ComputeDistortion__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_ComputeDistortion__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_ComputeDistortion");
        }
        inline app::IVRSystem_ComputeDistortion* create() {
            return il2cpp::create_object<app::IVRSystem_ComputeDistortion>(get_class());
        }
    } // namespace IVRSystem_ComputeDistortion
} // namespace app::classes::types
