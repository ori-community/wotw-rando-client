#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SkeletonGizmo {
        namespace {
            app::SkeletonGizmo__Class* type_info_ref = nullptr;
        }
        app::SkeletonGizmo__Class** type_info = &type_info_ref;
        inline app::SkeletonGizmo__Class* get_class() {
            return il2cpp::get_class<app::SkeletonGizmo__Class>(type_info, "", "SkeletonGizmo");
        }
        inline app::SkeletonGizmo* create() {
            return il2cpp::create_object<app::SkeletonGizmo>(get_class());
        }
    } // namespace SkeletonGizmo
} // namespace app::classes::types
