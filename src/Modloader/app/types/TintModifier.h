#pragma once
#include <Modloader/app/structs/TintModifier.h>
#include <Modloader/app/structs/TintModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TintModifier {
        inline app::TintModifier__Class** type_info() {
            static app::TintModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TintModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TintModifier__Class* get_class() {
            return il2cpp::get_class<app::TintModifier__Class>(type_info(), "", "TintModifier");
        }
        inline app::TintModifier* create() {
            return il2cpp::create_object<app::TintModifier>(get_class());
        }
    } // namespace TintModifier
} // namespace app::classes::types
