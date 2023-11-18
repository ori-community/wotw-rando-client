#pragma once
#include <Modloader/app/structs/IVRCompositor_IsFullscreen.h>
#include <Modloader/app/structs/IVRCompositor_IsFullscreen__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRCompositor_IsFullscreen {
        inline app::IVRCompositor_IsFullscreen__Class** type_info() {
            static app::IVRCompositor_IsFullscreen__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRCompositor_IsFullscreen__Class**)(modloader::win::memory::resolve_rva(0x04757AA0));
            }
            return cache;
        }
        inline app::IVRCompositor_IsFullscreen__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_IsFullscreen__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_IsFullscreen");
        }
        inline app::IVRCompositor_IsFullscreen* create() {
            return il2cpp::create_object<app::IVRCompositor_IsFullscreen>(get_class());
        }
    } // namespace IVRCompositor_IsFullscreen
} // namespace app::classes::types
