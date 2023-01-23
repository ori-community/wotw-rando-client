#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IVRCompositor_GetFrameTimings__Class.h>
#include <Modloader/app/structs/IVRCompositor_GetFrameTimings.h>

namespace app::classes::types {
    namespace IVRCompositor_GetFrameTimings {
        inline app::IVRCompositor_GetFrameTimings__Class** type_info = (app::IVRCompositor_GetFrameTimings__Class**)(modloader::win::memory::resolve_rva(0x04777218));
        inline app::IVRCompositor_GetFrameTimings__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_GetFrameTimings__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_GetFrameTimings");
        }
        inline app::IVRCompositor_GetFrameTimings* create() {
            return il2cpp::create_object<app::IVRCompositor_GetFrameTimings>(get_class());
        }
    } // namespace IVRCompositor_GetFrameTimings
} // namespace app::classes::types
