#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Compositor_FrameTiming {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Compositor_FrameTiming__Class** type_info;
        inline app::Compositor_FrameTiming__Class* get_class() {
            return il2cpp::get_class<app::Compositor_FrameTiming__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "Compositor_FrameTiming");
        }
        inline app::Compositor_FrameTiming* create() {
            return il2cpp::create_object<app::Compositor_FrameTiming>(get_class());
        }
        inline app::Compositor_FrameTiming__Boxed* box(app::Compositor_FrameTiming value) {
            return il2cpp::box_value<app::Compositor_FrameTiming__Boxed>(get_class(), value);
        }
    } // namespace Compositor_FrameTiming
} // namespace app::classes::types
