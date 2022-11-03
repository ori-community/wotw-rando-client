#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DropSlugEnemy_States {
        inline app::DropSlugEnemy_States__Class** type_info = (app::DropSlugEnemy_States__Class**)(modloader::win::memory::resolve_rva(0x047109B0));
        inline app::DropSlugEnemy_States__Class* get_class() {
            return il2cpp::get_nested_class<app::DropSlugEnemy_States__Class>(type_info, "", "DropSlugEnemy", "States");
        }
        inline app::DropSlugEnemy_States* create() {
            return il2cpp::create_object<app::DropSlugEnemy_States>(get_class());
        }
    } // namespace DropSlugEnemy_States
} // namespace app::classes::types
