#pragma once
#include <Modloader/app/structs/AnimationCurve3D.h>
#include <Modloader/app/structs/AnimationCurve3D__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationCurve3D {
        inline app::AnimationCurve3D__Class** type_info() {
            static app::AnimationCurve3D__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AnimationCurve3D__Class**)(modloader::win::memory::resolve_rva(0x04721180));
            }
            return cache;
        }
        inline app::AnimationCurve3D__Class* get_class() {
            return il2cpp::get_class<app::AnimationCurve3D__Class>(type_info(), "Moon.Timeline", "AnimationCurve3D");
        }
        inline app::AnimationCurve3D* create() {
            return il2cpp::create_object<app::AnimationCurve3D>(get_class());
        }
    } // namespace AnimationCurve3D
} // namespace app::classes::types
