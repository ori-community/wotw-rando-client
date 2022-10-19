#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace StarSlugEnemy_c {
        inline app::StarSlugEnemy_c__Class** type_info = (app::StarSlugEnemy_c__Class**)(modloader::win::memory::resolve_rva(0x0473F040));
        inline app::StarSlugEnemy_c__Class* get_class() {
            return il2cpp::get_nested_class<app::StarSlugEnemy_c__Class>(type_info, "", "StarSlugEnemy", "<>c");
        }
        inline app::StarSlugEnemy_c* create() {
            return il2cpp::create_object<app::StarSlugEnemy_c>(get_class());
        }
    } // namespace StarSlugEnemy_c
} // namespace app::classes::types
