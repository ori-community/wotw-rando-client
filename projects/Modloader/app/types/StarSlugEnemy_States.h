#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace StarSlugEnemy_States {
        inline app::StarSlugEnemy_States__Class** type_info = (app::StarSlugEnemy_States__Class**)(modloader::win::memory::resolve_rva(0x047761D8));
        inline app::StarSlugEnemy_States__Class* get_class() {
            return il2cpp::get_nested_class<app::StarSlugEnemy_States__Class>(type_info, "", "StarSlugEnemy", "States");
        }
        inline app::StarSlugEnemy_States* create() {
            return il2cpp::create_object<app::StarSlugEnemy_States>(get_class());
        }
    } // namespace StarSlugEnemy_States
} // namespace app::classes::types
