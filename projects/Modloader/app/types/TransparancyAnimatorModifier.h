#pragma once
#include <Modloader/app/structs/TransparancyAnimatorModifier.h>
#include <Modloader/app/structs/TransparancyAnimatorModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TransparancyAnimatorModifier {
        inline app::TransparancyAnimatorModifier__Class** type_info() {
            static app::TransparancyAnimatorModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TransparancyAnimatorModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TransparancyAnimatorModifier__Class* get_class() {
            return il2cpp::get_class<app::TransparancyAnimatorModifier__Class>(type_info(), "", "TransparancyAnimatorModifier");
        }
        inline app::TransparancyAnimatorModifier* create() {
            return il2cpp::create_object<app::TransparancyAnimatorModifier>(get_class());
        }
    } // namespace TransparancyAnimatorModifier
} // namespace app::classes::types
