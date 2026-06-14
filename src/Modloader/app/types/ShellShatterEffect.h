#pragma once
#include <Modloader/app/structs/ShellShatterEffect.h>
#include <Modloader/app/structs/ShellShatterEffect__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShellShatterEffect {
        inline app::ShellShatterEffect__Class** type_info() {
            static app::ShellShatterEffect__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShellShatterEffect__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShellShatterEffect__Class* get_class() {
            return il2cpp::get_class<app::ShellShatterEffect__Class>(type_info(), "", "ShellShatterEffect");
        }
        inline app::ShellShatterEffect* create() {
            return il2cpp::create_object<app::ShellShatterEffect>(get_class());
        }
    } // namespace ShellShatterEffect
} // namespace app::classes::types
