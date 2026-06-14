#pragma once
#include <Modloader/app/structs/SpitterEnemy_States.h>
#include <Modloader/app/structs/SpitterEnemy_States__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpitterEnemy_States {
        inline app::SpitterEnemy_States__Class** type_info() {
            static app::SpitterEnemy_States__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SpitterEnemy_States__Class**)(modloader::win::memory::resolve_rva(0x04710D08));
            }
            return cache;
        }
        inline app::SpitterEnemy_States__Class* get_class() {
            return il2cpp::get_nested_class<app::SpitterEnemy_States__Class>(type_info(), "", "SpitterEnemy", "States");
        }
        inline app::SpitterEnemy_States* create() {
            return il2cpp::create_object<app::SpitterEnemy_States>(get_class());
        }
    } // namespace SpitterEnemy_States
} // namespace app::classes::types
