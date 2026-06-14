#pragma once
#include <Modloader/app/structs/DepthOfField_1.h>
#include <Modloader/app/structs/DepthOfField_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DepthOfField_1 {
        inline app::DepthOfField_1__Class** type_info() {
            static app::DepthOfField_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DepthOfField_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DepthOfField_1__Class* get_class() {
            return il2cpp::get_class<app::DepthOfField_1__Class>(type_info(), "UnityStandardAssets.CinematicEffects", "DepthOfField");
        }
        inline app::DepthOfField_1* create() {
            return il2cpp::create_object<app::DepthOfField_1>(get_class());
        }
    } // namespace DepthOfField_1
} // namespace app::classes::types
