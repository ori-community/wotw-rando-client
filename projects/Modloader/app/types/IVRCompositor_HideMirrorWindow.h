#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IVRCompositor_HideMirrorWindow__Class.h>
#include <Modloader/app/structs/IVRCompositor_HideMirrorWindow.h>

namespace app::classes::types {
    namespace IVRCompositor_HideMirrorWindow {
        inline app::IVRCompositor_HideMirrorWindow__Class** type_info = (app::IVRCompositor_HideMirrorWindow__Class**)(modloader::win::memory::resolve_rva(0x0472B5A8));
        inline app::IVRCompositor_HideMirrorWindow__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_HideMirrorWindow__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_HideMirrorWindow");
        }
        inline app::IVRCompositor_HideMirrorWindow* create() {
            return il2cpp::create_object<app::IVRCompositor_HideMirrorWindow>(get_class());
        }
    } // namespace IVRCompositor_HideMirrorWindow
} // namespace app::classes::types
