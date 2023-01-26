#pragma once
#include <Modloader/app/structs/MinAttribute_1.h>
#include <Modloader/app/structs/MinAttribute_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MinAttribute_1 {
        inline app::MinAttribute_1__Class** type_info() {
            static app::MinAttribute_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MinAttribute_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MinAttribute_1__Class* get_class() {
            return il2cpp::get_class<app::MinAttribute_1__Class>(type_info(), "UnityStandardAssets.CinematicEffects", "MinAttribute");
        }
        inline app::MinAttribute_1* create() {
            return il2cpp::create_object<app::MinAttribute_1>(get_class());
        }
    } // namespace MinAttribute_1
} // namespace app::classes::types
