#pragma once
#include <Modloader/app/structs/IVRSystem_ApplyTransform.h>
#include <Modloader/app/structs/IVRSystem_ApplyTransform__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRSystem_ApplyTransform {
        inline app::IVRSystem_ApplyTransform__Class** type_info() {
            static app::IVRSystem_ApplyTransform__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRSystem_ApplyTransform__Class**)(modloader::win::memory::resolve_rva(0x04711080));
            }
            return cache;
        }
        inline app::IVRSystem_ApplyTransform__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_ApplyTransform__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_ApplyTransform");
        }
        inline app::IVRSystem_ApplyTransform* create() {
            return il2cpp::create_object<app::IVRSystem_ApplyTransform>(get_class());
        }
    } // namespace IVRSystem_ApplyTransform
} // namespace app::classes::types
