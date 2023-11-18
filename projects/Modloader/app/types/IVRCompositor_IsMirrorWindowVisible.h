#pragma once
#include <Modloader/app/structs/IVRCompositor_IsMirrorWindowVisible.h>
#include <Modloader/app/structs/IVRCompositor_IsMirrorWindowVisible__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRCompositor_IsMirrorWindowVisible {
        inline app::IVRCompositor_IsMirrorWindowVisible__Class** type_info() {
            static app::IVRCompositor_IsMirrorWindowVisible__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRCompositor_IsMirrorWindowVisible__Class**)(modloader::win::memory::resolve_rva(0x04746388));
            }
            return cache;
        }
        inline app::IVRCompositor_IsMirrorWindowVisible__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_IsMirrorWindowVisible__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_IsMirrorWindowVisible");
        }
        inline app::IVRCompositor_IsMirrorWindowVisible* create() {
            return il2cpp::create_object<app::IVRCompositor_IsMirrorWindowVisible>(get_class());
        }
    } // namespace IVRCompositor_IsMirrorWindowVisible
} // namespace app::classes::types
