#pragma once
#include <Modloader/app/structs/TurbulenceBrightnessModifier.h>
#include <Modloader/app/structs/TurbulenceBrightnessModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TurbulenceBrightnessModifier {
        inline app::TurbulenceBrightnessModifier__Class** type_info() {
            static app::TurbulenceBrightnessModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TurbulenceBrightnessModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TurbulenceBrightnessModifier__Class* get_class() {
            return il2cpp::get_class<app::TurbulenceBrightnessModifier__Class>(type_info(), "", "TurbulenceBrightnessModifier");
        }
        inline app::TurbulenceBrightnessModifier* create() {
            return il2cpp::create_object<app::TurbulenceBrightnessModifier>(get_class());
        }
    } // namespace TurbulenceBrightnessModifier
} // namespace app::classes::types
