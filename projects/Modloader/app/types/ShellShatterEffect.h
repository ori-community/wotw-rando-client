#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShellShatterEffect__Class.h>
#include <Modloader/app/structs/ShellShatterEffect.h>

namespace app::classes::types {
    namespace ShellShatterEffect {
        namespace {
            inline app::ShellShatterEffect__Class* type_info_ref = nullptr;
        }
        inline app::ShellShatterEffect__Class** type_info = &type_info_ref;
        inline app::ShellShatterEffect__Class* get_class() {
            return il2cpp::get_class<app::ShellShatterEffect__Class>(type_info, "", "ShellShatterEffect");
        }
        inline app::ShellShatterEffect* create() {
            return il2cpp::create_object<app::ShellShatterEffect>(get_class());
        }
    } // namespace ShellShatterEffect
} // namespace app::classes::types
