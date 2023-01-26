#pragma once
#include <Modloader/app/structs/UberTrailModifier.h>
#include <Modloader/app/structs/UberTrailModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberTrailModifier {
        inline app::UberTrailModifier__Class** type_info() {
            static app::UberTrailModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberTrailModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberTrailModifier__Class* get_class() {
            return il2cpp::get_class<app::UberTrailModifier__Class>(type_info(), "", "UberTrailModifier");
        }
        inline app::UberTrailModifier* create() {
            return il2cpp::create_object<app::UberTrailModifier>(get_class());
        }
    } // namespace UberTrailModifier
} // namespace app::classes::types
