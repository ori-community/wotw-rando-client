#pragma once
#include <Modloader/app/structs/Compositor_FrameTiming.h>
#include <Modloader/app/structs/Compositor_FrameTiming__Boxed.h>
#include <Modloader/app/structs/Compositor_FrameTiming__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Compositor_FrameTiming {
        inline app::Compositor_FrameTiming__Class** type_info() {
            static app::Compositor_FrameTiming__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Compositor_FrameTiming__Class**)(modloader::win::memory::resolve_rva(0x0472A518));
            }
            return cache;
        }
        inline app::Compositor_FrameTiming__Class* get_class() {
            return il2cpp::get_class<app::Compositor_FrameTiming__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "Compositor_FrameTiming");
        }
        inline app::Compositor_FrameTiming* create() {
            return il2cpp::create_object<app::Compositor_FrameTiming>(get_class());
        }
        inline app::Compositor_FrameTiming__Boxed* box(app::Compositor_FrameTiming value) {
            return il2cpp::box_value<app::Compositor_FrameTiming__Boxed>(get_class(), value);
        }
    } // namespace Compositor_FrameTiming
} // namespace app::classes::types
