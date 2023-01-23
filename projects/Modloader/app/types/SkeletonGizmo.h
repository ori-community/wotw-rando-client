#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SkeletonGizmo__Class.h>
#include <Modloader/app/structs/SkeletonGizmo.h>

namespace app::classes::types {
    namespace SkeletonGizmo {
        namespace {
            inline app::SkeletonGizmo__Class* type_info_ref = nullptr;
        }
        inline app::SkeletonGizmo__Class** type_info = &type_info_ref;
        inline app::SkeletonGizmo__Class* get_class() {
            return il2cpp::get_class<app::SkeletonGizmo__Class>(type_info, "", "SkeletonGizmo");
        }
        inline app::SkeletonGizmo* create() {
            return il2cpp::create_object<app::SkeletonGizmo>(get_class());
        }
    } // namespace SkeletonGizmo
} // namespace app::classes::types
