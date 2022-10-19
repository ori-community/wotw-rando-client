#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRCompositor_ShowMirrorWindow {
        inline app::IVRCompositor_ShowMirrorWindow__Class** type_info = (app::IVRCompositor_ShowMirrorWindow__Class**)(modloader::win::memory::resolve_rva(0x0474F3A8));
        inline app::IVRCompositor_ShowMirrorWindow__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_ShowMirrorWindow__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_ShowMirrorWindow");
        }
        inline app::IVRCompositor_ShowMirrorWindow* create() {
            return il2cpp::create_object<app::IVRCompositor_ShowMirrorWindow>(get_class());
        }
    } // namespace IVRCompositor_ShowMirrorWindow
} // namespace app::classes::types
