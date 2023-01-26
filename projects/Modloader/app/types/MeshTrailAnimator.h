#pragma once
#include <Modloader/app/structs/MeshTrailAnimator.h>
#include <Modloader/app/structs/MeshTrailAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MeshTrailAnimator {
        inline app::MeshTrailAnimator__Class** type_info() {
            static app::MeshTrailAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MeshTrailAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MeshTrailAnimator__Class* get_class() {
            return il2cpp::get_class<app::MeshTrailAnimator__Class>(type_info(), "", "MeshTrailAnimator");
        }
        inline app::MeshTrailAnimator* create() {
            return il2cpp::create_object<app::MeshTrailAnimator>(get_class());
        }
    } // namespace MeshTrailAnimator
} // namespace app::classes::types
