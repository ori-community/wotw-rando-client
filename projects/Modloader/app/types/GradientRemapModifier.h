#pragma once
#include <Modloader/app/structs/GradientRemapModifier.h>
#include <Modloader/app/structs/GradientRemapModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GradientRemapModifier {
        inline app::GradientRemapModifier__Class** type_info() {
            static app::GradientRemapModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GradientRemapModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GradientRemapModifier__Class* get_class() {
            return il2cpp::get_class<app::GradientRemapModifier__Class>(type_info(), "", "GradientRemapModifier");
        }
        inline app::GradientRemapModifier* create() {
            return il2cpp::create_object<app::GradientRemapModifier>(get_class());
        }
    } // namespace GradientRemapModifier
} // namespace app::classes::types
