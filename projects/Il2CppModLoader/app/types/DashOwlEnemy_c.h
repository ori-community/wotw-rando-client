#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DashOwlEnemy_c {
        inline app::DashOwlEnemy_c__Class** type_info = (app::DashOwlEnemy_c__Class**)(modloader::win::memory::resolve_rva(0x04702AF8));
        inline app::DashOwlEnemy_c__Class* get_class() {
            return il2cpp::get_nested_class<app::DashOwlEnemy_c__Class>(type_info, "", "DashOwlEnemy", "<>c");
        }
        inline app::DashOwlEnemy_c* create() {
            return il2cpp::create_object<app::DashOwlEnemy_c>(get_class());
        }
    } // namespace DashOwlEnemy_c
} // namespace app::classes::types
