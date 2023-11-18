#pragma once
#include <Modloader/app/structs/SkeletonBone.h>
#include <Modloader/app/structs/SkeletonBone__Boxed.h>
#include <Modloader/app/structs/SkeletonBone__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SkeletonBone {
        inline app::SkeletonBone__Class** type_info() {
            static app::SkeletonBone__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SkeletonBone__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SkeletonBone__Class* get_class() {
            return il2cpp::get_class<app::SkeletonBone__Class>(type_info(), "UnityEngine", "SkeletonBone");
        }
        inline app::SkeletonBone* create() {
            return il2cpp::create_object<app::SkeletonBone>(get_class());
        }
        inline app::SkeletonBone__Boxed* box(app::SkeletonBone value) {
            return il2cpp::box_value<app::SkeletonBone__Boxed>(get_class(), value);
        }
    } // namespace SkeletonBone
} // namespace app::classes::types
