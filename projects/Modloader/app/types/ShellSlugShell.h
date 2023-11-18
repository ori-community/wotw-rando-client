#pragma once
#include <Modloader/app/structs/ShellSlugShell.h>
#include <Modloader/app/structs/ShellSlugShell__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShellSlugShell {
        inline app::ShellSlugShell__Class** type_info() {
            static app::ShellSlugShell__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShellSlugShell__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShellSlugShell__Class* get_class() {
            return il2cpp::get_class<app::ShellSlugShell__Class>(type_info(), "", "ShellSlugShell");
        }
        inline app::ShellSlugShell* create() {
            return il2cpp::create_object<app::ShellSlugShell>(get_class());
        }
    } // namespace ShellSlugShell
} // namespace app::classes::types
