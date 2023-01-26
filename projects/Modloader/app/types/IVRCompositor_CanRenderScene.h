#pragma once
#include <Modloader/app/structs/IVRCompositor_CanRenderScene.h>
#include <Modloader/app/structs/IVRCompositor_CanRenderScene__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRCompositor_CanRenderScene {
        inline app::IVRCompositor_CanRenderScene__Class** type_info() {
            static app::IVRCompositor_CanRenderScene__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRCompositor_CanRenderScene__Class**)(modloader::win::memory::resolve_rva(0x0471C5D0));
            }
            return cache;
        }
        inline app::IVRCompositor_CanRenderScene__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_CanRenderScene__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_CanRenderScene");
        }
        inline app::IVRCompositor_CanRenderScene* create() {
            return il2cpp::create_object<app::IVRCompositor_CanRenderScene>(get_class());
        }
    } // namespace IVRCompositor_CanRenderScene
} // namespace app::classes::types
