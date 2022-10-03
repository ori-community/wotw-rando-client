#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShellSlugShell {
        namespace {
            app::ShellSlugShell__Class* type_info_ref = nullptr;
        }
        app::ShellSlugShell__Class** type_info = &type_info_ref;
        inline app::ShellSlugShell__Class* get_class() {
            return il2cpp::get_class<app::ShellSlugShell__Class>(type_info, "", "ShellSlugShell");
        }
        inline app::ShellSlugShell* create() {
            return il2cpp::create_object<app::ShellSlugShell>(get_class());
        }
    } // namespace ShellSlugShell
} // namespace app::classes::types
