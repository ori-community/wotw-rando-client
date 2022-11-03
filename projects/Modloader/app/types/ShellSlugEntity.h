#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShellSlugEntity {
        namespace {
            inline app::ShellSlugEntity__Class* type_info_ref = nullptr;
        }
        inline app::ShellSlugEntity__Class** type_info = &type_info_ref;
        inline app::ShellSlugEntity__Class* get_class() {
            return il2cpp::get_class<app::ShellSlugEntity__Class>(type_info, "", "ShellSlugEntity");
        }
        inline app::ShellSlugEntity* create() {
            return il2cpp::create_object<app::ShellSlugEntity>(get_class());
        }
    } // namespace ShellSlugEntity
} // namespace app::classes::types
