#pragma once
#include <Modloader/app/structs/DepthOfField.h>
#include <Modloader/app/structs/DepthOfField__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DepthOfField {
        inline app::DepthOfField__Class** type_info() {
            static app::DepthOfField__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DepthOfField__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DepthOfField__Class* get_class() {
            return il2cpp::get_class<app::DepthOfField__Class>(type_info(), "UnityStandardAssets.ImageEffects", "DepthOfField");
        }
        inline app::DepthOfField* create() {
            return il2cpp::create_object<app::DepthOfField>(get_class());
        }
    } // namespace DepthOfField
} // namespace app::classes::types
