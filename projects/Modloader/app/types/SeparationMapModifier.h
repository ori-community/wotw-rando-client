#pragma once
#include <Modloader/app/structs/SeparationMapModifier.h>
#include <Modloader/app/structs/SeparationMapModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeparationMapModifier {
        inline app::SeparationMapModifier__Class** type_info() {
            static app::SeparationMapModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeparationMapModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeparationMapModifier__Class* get_class() {
            return il2cpp::get_class<app::SeparationMapModifier__Class>(type_info(), "", "SeparationMapModifier");
        }
        inline app::SeparationMapModifier* create() {
            return il2cpp::create_object<app::SeparationMapModifier>(get_class());
        }
    } // namespace SeparationMapModifier
} // namespace app::classes::types
