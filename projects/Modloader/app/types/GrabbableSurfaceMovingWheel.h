#pragma once
#include <Modloader/app/structs/GrabbableSurfaceMovingWheel.h>
#include <Modloader/app/structs/GrabbableSurfaceMovingWheel__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GrabbableSurfaceMovingWheel {
        inline app::GrabbableSurfaceMovingWheel__Class** type_info() {
            static app::GrabbableSurfaceMovingWheel__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GrabbableSurfaceMovingWheel__Class**)(modloader::win::memory::resolve_rva(0x0475D8F8));
            }
            return cache;
        }
        inline app::GrabbableSurfaceMovingWheel__Class* get_class() {
            return il2cpp::get_class<app::GrabbableSurfaceMovingWheel__Class>(type_info(), "", "GrabbableSurfaceMovingWheel");
        }
        inline app::GrabbableSurfaceMovingWheel* create() {
            return il2cpp::create_object<app::GrabbableSurfaceMovingWheel>(get_class());
        }
    } // namespace GrabbableSurfaceMovingWheel
} // namespace app::classes::types
