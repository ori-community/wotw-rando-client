#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace JumperEnemy {
        namespace {
            inline app::JumperEnemy__Class* type_info_ref = nullptr;
        }
        inline app::JumperEnemy__Class** type_info = &type_info_ref;
        inline app::JumperEnemy__Class* get_class() {
            return il2cpp::get_class<app::JumperEnemy__Class>(type_info, "", "JumperEnemy");
        }
        inline app::JumperEnemy* create() {
            return il2cpp::create_object<app::JumperEnemy>(get_class());
        }
    } // namespace JumperEnemy
} // namespace app::classes::types
