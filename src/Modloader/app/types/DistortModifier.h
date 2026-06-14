#pragma once
#include <Modloader/app/structs/DistortModifier.h>
#include <Modloader/app/structs/DistortModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DistortModifier {
        inline app::DistortModifier__Class** type_info() {
            static app::DistortModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DistortModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DistortModifier__Class* get_class() {
            return il2cpp::get_class<app::DistortModifier__Class>(type_info(), "", "DistortModifier");
        }
        inline app::DistortModifier* create() {
            return il2cpp::create_object<app::DistortModifier>(get_class());
        }
    } // namespace DistortModifier
} // namespace app::classes::types
