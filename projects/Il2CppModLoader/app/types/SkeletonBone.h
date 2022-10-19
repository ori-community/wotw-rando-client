#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SkeletonBone {
        namespace {
            inline app::SkeletonBone__Class* type_info_ref = nullptr;
        }
        inline app::SkeletonBone__Class** type_info = &type_info_ref;
        inline app::SkeletonBone__Class* get_class() {
            return il2cpp::get_class<app::SkeletonBone__Class>(type_info, "UnityEngine", "SkeletonBone");
        }
        inline app::SkeletonBone* create() {
            return il2cpp::create_object<app::SkeletonBone>(get_class());
        }
        inline app::SkeletonBone__Boxed* box(app::SkeletonBone value) {
            return il2cpp::box_value<app::SkeletonBone__Boxed>(get_class(), value);
        }
    } // namespace SkeletonBone
} // namespace app::classes::types
