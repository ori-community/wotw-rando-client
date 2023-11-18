#pragma once
#include <Modloader/app/structs/MortarWormDirectionalAnimations.h>
#include <Modloader/app/structs/MortarWormDirectionalAnimations__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MortarWormDirectionalAnimations {
        inline app::MortarWormDirectionalAnimations__Class** type_info() {
            static app::MortarWormDirectionalAnimations__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MortarWormDirectionalAnimations__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MortarWormDirectionalAnimations__Class* get_class() {
            return il2cpp::get_class<app::MortarWormDirectionalAnimations__Class>(type_info(), "", "MortarWormDirectionalAnimations");
        }
        inline app::MortarWormDirectionalAnimations* create() {
            return il2cpp::create_object<app::MortarWormDirectionalAnimations>(get_class());
        }
    } // namespace MortarWormDirectionalAnimations
} // namespace app::classes::types
