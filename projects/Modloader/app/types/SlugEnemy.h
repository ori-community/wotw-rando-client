#pragma once
#include <Modloader/app/structs/SlugEnemy.h>
#include <Modloader/app/structs/SlugEnemy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SlugEnemy {
        inline app::SlugEnemy__Class** type_info() {
            static app::SlugEnemy__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SlugEnemy__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SlugEnemy__Class* get_class() {
            return il2cpp::get_class<app::SlugEnemy__Class>(type_info(), "", "SlugEnemy");
        }
        inline app::SlugEnemy* create() {
            return il2cpp::create_object<app::SlugEnemy>(get_class());
        }
    } // namespace SlugEnemy
} // namespace app::classes::types
