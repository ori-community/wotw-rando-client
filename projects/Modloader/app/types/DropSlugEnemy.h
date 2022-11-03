#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DropSlugEnemy {
        namespace {
            inline app::DropSlugEnemy__Class* type_info_ref = nullptr;
        }
        inline app::DropSlugEnemy__Class** type_info = &type_info_ref;
        inline app::DropSlugEnemy__Class* get_class() {
            return il2cpp::get_class<app::DropSlugEnemy__Class>(type_info, "", "DropSlugEnemy");
        }
        inline app::DropSlugEnemy* create() {
            return il2cpp::create_object<app::DropSlugEnemy>(get_class());
        }
    } // namespace DropSlugEnemy
} // namespace app::classes::types
