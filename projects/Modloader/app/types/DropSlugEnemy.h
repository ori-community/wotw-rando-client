#pragma once
#include <Modloader/app/structs/DropSlugEnemy.h>
#include <Modloader/app/structs/DropSlugEnemy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DropSlugEnemy {
        inline app::DropSlugEnemy__Class** type_info() {
            static app::DropSlugEnemy__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DropSlugEnemy__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DropSlugEnemy__Class* get_class() {
            return il2cpp::get_class<app::DropSlugEnemy__Class>(type_info(), "", "DropSlugEnemy");
        }
        inline app::DropSlugEnemy* create() {
            return il2cpp::create_object<app::DropSlugEnemy>(get_class());
        }
    } // namespace DropSlugEnemy
} // namespace app::classes::types
