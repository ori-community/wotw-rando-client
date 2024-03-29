#pragma once
#include <Modloader/app/structs/IVRCompositor_ForceInterleavedReprojectionOn.h>
#include <Modloader/app/structs/IVRCompositor_ForceInterleavedReprojectionOn__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRCompositor_ForceInterleavedReprojectionOn {
        inline app::IVRCompositor_ForceInterleavedReprojectionOn__Class** type_info() {
            static app::IVRCompositor_ForceInterleavedReprojectionOn__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRCompositor_ForceInterleavedReprojectionOn__Class**)(modloader::win::memory::resolve_rva(0x0475E390));
            }
            return cache;
        }
        inline app::IVRCompositor_ForceInterleavedReprojectionOn__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_ForceInterleavedReprojectionOn__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_ForceInterleavedReprojectionOn");
        }
        inline app::IVRCompositor_ForceInterleavedReprojectionOn* create() {
            return il2cpp::create_object<app::IVRCompositor_ForceInterleavedReprojectionOn>(get_class());
        }
    } // namespace IVRCompositor_ForceInterleavedReprojectionOn
} // namespace app::classes::types
