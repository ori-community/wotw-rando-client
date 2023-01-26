#pragma once
#include <Modloader/app/structs/EmissivityModifier.h>
#include <Modloader/app/structs/EmissivityModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EmissivityModifier {
        inline app::EmissivityModifier__Class** type_info() {
            static app::EmissivityModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EmissivityModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EmissivityModifier__Class* get_class() {
            return il2cpp::get_class<app::EmissivityModifier__Class>(type_info(), "", "EmissivityModifier");
        }
        inline app::EmissivityModifier* create() {
            return il2cpp::create_object<app::EmissivityModifier>(get_class());
        }
    } // namespace EmissivityModifier
} // namespace app::classes::types
