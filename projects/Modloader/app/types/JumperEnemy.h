#pragma once
#include <Modloader/app/structs/JumperEnemy.h>
#include <Modloader/app/structs/JumperEnemy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JumperEnemy {
        inline app::JumperEnemy__Class** type_info() {
            static app::JumperEnemy__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::JumperEnemy__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::JumperEnemy__Class* get_class() {
            return il2cpp::get_class<app::JumperEnemy__Class>(type_info(), "", "JumperEnemy");
        }
        inline app::JumperEnemy* create() {
            return il2cpp::create_object<app::JumperEnemy>(get_class());
        }
    } // namespace JumperEnemy
} // namespace app::classes::types
