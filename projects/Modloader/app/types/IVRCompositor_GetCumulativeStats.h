#pragma once
#include <Modloader/app/structs/IVRCompositor_GetCumulativeStats.h>
#include <Modloader/app/structs/IVRCompositor_GetCumulativeStats__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRCompositor_GetCumulativeStats {
        inline app::IVRCompositor_GetCumulativeStats__Class** type_info() {
            static app::IVRCompositor_GetCumulativeStats__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRCompositor_GetCumulativeStats__Class**)(modloader::win::memory::resolve_rva(0x04710E50));
            }
            return cache;
        }
        inline app::IVRCompositor_GetCumulativeStats__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_GetCumulativeStats__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_GetCumulativeStats");
        }
        inline app::IVRCompositor_GetCumulativeStats* create() {
            return il2cpp::create_object<app::IVRCompositor_GetCumulativeStats>(get_class());
        }
    } // namespace IVRCompositor_GetCumulativeStats
} // namespace app::classes::types
