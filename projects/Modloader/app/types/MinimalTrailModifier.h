#pragma once
#include <Modloader/app/structs/MinimalTrailModifier.h>
#include <Modloader/app/structs/MinimalTrailModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MinimalTrailModifier {
        inline app::MinimalTrailModifier__Class** type_info() {
            static app::MinimalTrailModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MinimalTrailModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MinimalTrailModifier__Class* get_class() {
            return il2cpp::get_class<app::MinimalTrailModifier__Class>(type_info(), "", "MinimalTrailModifier");
        }
        inline app::MinimalTrailModifier* create() {
            return il2cpp::create_object<app::MinimalTrailModifier>(get_class());
        }
    } // namespace MinimalTrailModifier
} // namespace app::classes::types
