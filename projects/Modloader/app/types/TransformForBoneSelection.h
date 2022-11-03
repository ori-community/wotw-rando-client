#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TransformForBoneSelection {
        namespace {
            inline app::TransformForBoneSelection__Class* type_info_ref = nullptr;
        }
        inline app::TransformForBoneSelection__Class** type_info = &type_info_ref;
        inline app::TransformForBoneSelection__Class* get_class() {
            return il2cpp::get_class<app::TransformForBoneSelection__Class>(type_info, "Moon", "TransformForBoneSelection");
        }
        inline app::TransformForBoneSelection* create() {
            return il2cpp::create_object<app::TransformForBoneSelection>(get_class());
        }
    } // namespace TransformForBoneSelection
} // namespace app::classes::types
