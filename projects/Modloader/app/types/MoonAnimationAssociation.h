#pragma once
#include <Modloader/app/structs/MoonAnimationAssociation.h>
#include <Modloader/app/structs/MoonAnimationAssociation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonAnimationAssociation {
        inline app::MoonAnimationAssociation__Class** type_info() {
            static app::MoonAnimationAssociation__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonAnimationAssociation__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonAnimationAssociation__Class* get_class() {
            return il2cpp::get_class<app::MoonAnimationAssociation__Class>(type_info(), "", "MoonAnimationAssociation");
        }
        inline app::MoonAnimationAssociation* create() {
            return il2cpp::create_object<app::MoonAnimationAssociation>(get_class());
        }
    } // namespace MoonAnimationAssociation
} // namespace app::classes::types
