#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/StarSlugEnemyAnimations__Class.h>
#include <Modloader/app/structs/StarSlugEnemyAnimations.h>

namespace app::classes::types {
    namespace StarSlugEnemyAnimations {
        namespace {
            inline app::StarSlugEnemyAnimations__Class* type_info_ref = nullptr;
        }
        inline app::StarSlugEnemyAnimations__Class** type_info = &type_info_ref;
        inline app::StarSlugEnemyAnimations__Class* get_class() {
            return il2cpp::get_class<app::StarSlugEnemyAnimations__Class>(type_info, "", "StarSlugEnemyAnimations");
        }
        inline app::StarSlugEnemyAnimations* create() {
            return il2cpp::create_object<app::StarSlugEnemyAnimations>(get_class());
        }
    } // namespace StarSlugEnemyAnimations
} // namespace app::classes::types
