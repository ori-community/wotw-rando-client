#pragma once
#include <Modloader/app/structs/IVRCompositor_ShowMirrorWindow.h>
#include <Modloader/app/structs/IVRCompositor_ShowMirrorWindow__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRCompositor_ShowMirrorWindow {
        inline app::IVRCompositor_ShowMirrorWindow__Class** type_info() {
            static app::IVRCompositor_ShowMirrorWindow__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRCompositor_ShowMirrorWindow__Class**)(modloader::win::memory::resolve_rva(0x0474F3A8));
            }
            return cache;
        }
        inline app::IVRCompositor_ShowMirrorWindow__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_ShowMirrorWindow__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_ShowMirrorWindow");
        }
        inline app::IVRCompositor_ShowMirrorWindow* create() {
            return il2cpp::create_object<app::IVRCompositor_ShowMirrorWindow>(get_class());
        }
    } // namespace IVRCompositor_ShowMirrorWindow
} // namespace app::classes::types
