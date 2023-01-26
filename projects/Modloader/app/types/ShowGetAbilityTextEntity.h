#pragma once
#include <Modloader/app/structs/ShowGetAbilityTextEntity.h>
#include <Modloader/app/structs/ShowGetAbilityTextEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShowGetAbilityTextEntity {
        inline app::ShowGetAbilityTextEntity__Class** type_info() {
            static app::ShowGetAbilityTextEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShowGetAbilityTextEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShowGetAbilityTextEntity__Class* get_class() {
            return il2cpp::get_class<app::ShowGetAbilityTextEntity__Class>(type_info(), "Moon.Timeline", "ShowGetAbilityTextEntity");
        }
        inline app::ShowGetAbilityTextEntity* create() {
            return il2cpp::create_object<app::ShowGetAbilityTextEntity>(get_class());
        }
    } // namespace ShowGetAbilityTextEntity
} // namespace app::classes::types
