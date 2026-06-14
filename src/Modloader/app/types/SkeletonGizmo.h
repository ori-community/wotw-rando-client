#pragma once
#include <Modloader/app/structs/SkeletonGizmo.h>
#include <Modloader/app/structs/SkeletonGizmo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SkeletonGizmo {
        inline app::SkeletonGizmo__Class** type_info() {
            static app::SkeletonGizmo__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SkeletonGizmo__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SkeletonGizmo__Class* get_class() {
            return il2cpp::get_class<app::SkeletonGizmo__Class>(type_info(), "", "SkeletonGizmo");
        }
        inline app::SkeletonGizmo* create() {
            return il2cpp::create_object<app::SkeletonGizmo>(get_class());
        }
    } // namespace SkeletonGizmo
} // namespace app::classes::types
