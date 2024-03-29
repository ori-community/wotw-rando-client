#pragma once
#include <Modloader/app/structs/Compositor_CumulativeStats.h>
#include <Modloader/app/structs/Compositor_CumulativeStats__Boxed.h>
#include <Modloader/app/structs/Compositor_CumulativeStats__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Compositor_CumulativeStats {
        inline app::Compositor_CumulativeStats__Class** type_info() {
            static app::Compositor_CumulativeStats__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Compositor_CumulativeStats__Class**)(modloader::win::memory::resolve_rva(0x04783F90));
            }
            return cache;
        }
        inline app::Compositor_CumulativeStats__Class* get_class() {
            return il2cpp::get_class<app::Compositor_CumulativeStats__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "Compositor_CumulativeStats");
        }
        inline app::Compositor_CumulativeStats* create() {
            return il2cpp::create_object<app::Compositor_CumulativeStats>(get_class());
        }
        inline app::Compositor_CumulativeStats__Boxed* box(app::Compositor_CumulativeStats value) {
            return il2cpp::box_value<app::Compositor_CumulativeStats__Boxed>(get_class(), value);
        }
    } // namespace Compositor_CumulativeStats
} // namespace app::classes::types
