#pragma once
#include <Modloader/app/structs/AcidSlugEnemy.h>
#include <Modloader/app/structs/AcidSlugEnemy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AcidSlugEnemy {
        inline app::AcidSlugEnemy__Class** type_info() {
            static app::AcidSlugEnemy__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AcidSlugEnemy__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AcidSlugEnemy__Class* get_class() {
            return il2cpp::get_class<app::AcidSlugEnemy__Class>(type_info(), "", "AcidSlugEnemy");
        }
        inline app::AcidSlugEnemy* create() {
            return il2cpp::create_object<app::AcidSlugEnemy>(get_class());
        }
    } // namespace AcidSlugEnemy
} // namespace app::classes::types
