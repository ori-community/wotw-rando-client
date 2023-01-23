#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IVRCompositor_CanRenderScene__Class.h>
#include <Modloader/app/structs/IVRCompositor_CanRenderScene.h>

namespace app::classes::types {
    namespace IVRCompositor_CanRenderScene {
        inline app::IVRCompositor_CanRenderScene__Class** type_info = (app::IVRCompositor_CanRenderScene__Class**)(modloader::win::memory::resolve_rva(0x0471C5D0));
        inline app::IVRCompositor_CanRenderScene__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_CanRenderScene__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_CanRenderScene");
        }
        inline app::IVRCompositor_CanRenderScene* create() {
            return il2cpp::create_object<app::IVRCompositor_CanRenderScene>(get_class());
        }
    } // namespace IVRCompositor_CanRenderScene
} // namespace app::classes::types
