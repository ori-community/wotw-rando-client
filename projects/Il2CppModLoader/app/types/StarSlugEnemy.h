#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StarSlugEnemy {
        namespace {
            app::StarSlugEnemy__Class* type_info_ref = nullptr;
        }
        app::StarSlugEnemy__Class** type_info = &type_info_ref;
        inline app::StarSlugEnemy__Class* get_class() {
            return il2cpp::get_class<app::StarSlugEnemy__Class>(type_info, "", "StarSlugEnemy");
        }
        inline app::StarSlugEnemy* create() {
            return il2cpp::create_object<app::StarSlugEnemy>(get_class());
        }
    } // namespace StarSlugEnemy
} // namespace app::classes::types
