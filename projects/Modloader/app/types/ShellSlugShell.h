#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShellSlugShell__Class.h>
#include <Modloader/app/structs/ShellSlugShell.h>

namespace app::classes::types {
    namespace ShellSlugShell {
        namespace {
            inline app::ShellSlugShell__Class* type_info_ref = nullptr;
        }
        inline app::ShellSlugShell__Class** type_info = &type_info_ref;
        inline app::ShellSlugShell__Class* get_class() {
            return il2cpp::get_class<app::ShellSlugShell__Class>(type_info, "", "ShellSlugShell");
        }
        inline app::ShellSlugShell* create() {
            return il2cpp::create_object<app::ShellSlugShell>(get_class());
        }
    } // namespace ShellSlugShell
} // namespace app::classes::types
