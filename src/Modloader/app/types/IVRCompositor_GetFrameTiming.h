#pragma once
#include <Modloader/app/structs/IVRCompositor_GetFrameTiming.h>
#include <Modloader/app/structs/IVRCompositor_GetFrameTiming__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRCompositor_GetFrameTiming {
        inline app::IVRCompositor_GetFrameTiming__Class** type_info() {
            static app::IVRCompositor_GetFrameTiming__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRCompositor_GetFrameTiming__Class**)(modloader::win::memory::resolve_rva(0x04775938));
            }
            return cache;
        }
        inline app::IVRCompositor_GetFrameTiming__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_GetFrameTiming__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_GetFrameTiming");
        }
        inline app::IVRCompositor_GetFrameTiming* create() {
            return il2cpp::create_object<app::IVRCompositor_GetFrameTiming>(get_class());
        }
    } // namespace IVRCompositor_GetFrameTiming
} // namespace app::classes::types
