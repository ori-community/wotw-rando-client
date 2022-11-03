#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace StarSlugEnemy {
        namespace {
            inline app::StarSlugEnemy__Class* type_info_ref = nullptr;
        }
        inline app::StarSlugEnemy__Class** type_info = &type_info_ref;
        inline app::StarSlugEnemy__Class* get_class() {
            return il2cpp::get_class<app::StarSlugEnemy__Class>(type_info, "", "StarSlugEnemy");
        }
        inline app::StarSlugEnemy* create() {
            return il2cpp::create_object<app::StarSlugEnemy>(get_class());
        }
    } // namespace StarSlugEnemy
} // namespace app::classes::types
