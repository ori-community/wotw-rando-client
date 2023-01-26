#pragma once
#include <Modloader/app/structs/StarSlugEnemy_States.h>
#include <Modloader/app/structs/StarSlugEnemy_States__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StarSlugEnemy_States {
        inline app::StarSlugEnemy_States__Class** type_info() {
            static app::StarSlugEnemy_States__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::StarSlugEnemy_States__Class**)(modloader::win::memory::resolve_rva(0x047761D8));
            }
            return cache;
        }
        inline app::StarSlugEnemy_States__Class* get_class() {
            return il2cpp::get_nested_class<app::StarSlugEnemy_States__Class>(type_info(), "", "StarSlugEnemy", "States");
        }
        inline app::StarSlugEnemy_States* create() {
            return il2cpp::create_object<app::StarSlugEnemy_States>(get_class());
        }
    } // namespace StarSlugEnemy_States
} // namespace app::classes::types
