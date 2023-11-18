#pragma once
#include <Modloader/app/structs/TransformForBoneSelection.h>
#include <Modloader/app/structs/TransformForBoneSelection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TransformForBoneSelection {
        inline app::TransformForBoneSelection__Class** type_info() {
            static app::TransformForBoneSelection__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TransformForBoneSelection__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TransformForBoneSelection__Class* get_class() {
            return il2cpp::get_class<app::TransformForBoneSelection__Class>(type_info(), "Moon", "TransformForBoneSelection");
        }
        inline app::TransformForBoneSelection* create() {
            return il2cpp::create_object<app::TransformForBoneSelection>(get_class());
        }
    } // namespace TransformForBoneSelection
} // namespace app::classes::types
