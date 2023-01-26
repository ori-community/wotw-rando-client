#pragma once
#include <Modloader/app/structs/StarSlugEnemy.h>
#include <Modloader/app/structs/StarSlugEnemy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StarSlugEnemy {
        inline app::StarSlugEnemy__Class** type_info() {
            static app::StarSlugEnemy__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StarSlugEnemy__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StarSlugEnemy__Class* get_class() {
            return il2cpp::get_class<app::StarSlugEnemy__Class>(type_info(), "", "StarSlugEnemy");
        }
        inline app::StarSlugEnemy* create() {
            return il2cpp::create_object<app::StarSlugEnemy>(get_class());
        }
    } // namespace StarSlugEnemy
} // namespace app::classes::types
