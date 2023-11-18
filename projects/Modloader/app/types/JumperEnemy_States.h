#pragma once
#include <Modloader/app/structs/JumperEnemy_States.h>
#include <Modloader/app/structs/JumperEnemy_States__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JumperEnemy_States {
        inline app::JumperEnemy_States__Class** type_info() {
            static app::JumperEnemy_States__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::JumperEnemy_States__Class**)(modloader::win::memory::resolve_rva(0x0472FEB8));
            }
            return cache;
        }
        inline app::JumperEnemy_States__Class* get_class() {
            return il2cpp::get_nested_class<app::JumperEnemy_States__Class>(type_info(), "", "JumperEnemy", "States");
        }
        inline app::JumperEnemy_States* create() {
            return il2cpp::create_object<app::JumperEnemy_States>(get_class());
        }
    } // namespace JumperEnemy_States
} // namespace app::classes::types
