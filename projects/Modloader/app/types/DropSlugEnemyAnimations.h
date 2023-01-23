#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DropSlugEnemyAnimations__Class.h>
#include <Modloader/app/structs/DropSlugEnemyAnimations.h>

namespace app::classes::types {
    namespace DropSlugEnemyAnimations {
        namespace {
            inline app::DropSlugEnemyAnimations__Class* type_info_ref = nullptr;
        }
        inline app::DropSlugEnemyAnimations__Class** type_info = &type_info_ref;
        inline app::DropSlugEnemyAnimations__Class* get_class() {
            return il2cpp::get_class<app::DropSlugEnemyAnimations__Class>(type_info, "", "DropSlugEnemyAnimations");
        }
        inline app::DropSlugEnemyAnimations* create() {
            return il2cpp::create_object<app::DropSlugEnemyAnimations>(get_class());
        }
    } // namespace DropSlugEnemyAnimations
} // namespace app::classes::types
