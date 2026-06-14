#pragma once
#include <Modloader/app/structs/ShellSlugEntity.h>
#include <Modloader/app/structs/ShellSlugEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShellSlugEntity {
        inline app::ShellSlugEntity__Class** type_info() {
            static app::ShellSlugEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShellSlugEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShellSlugEntity__Class* get_class() {
            return il2cpp::get_class<app::ShellSlugEntity__Class>(type_info(), "", "ShellSlugEntity");
        }
        inline app::ShellSlugEntity* create() {
            return il2cpp::create_object<app::ShellSlugEntity>(get_class());
        }
    } // namespace ShellSlugEntity
} // namespace app::classes::types
