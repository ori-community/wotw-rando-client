#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DiscoverAreasEntity_c_DisplayClass21_0 {
        inline app::DiscoverAreasEntity_c_DisplayClass21_0__Class** type_info = (app::DiscoverAreasEntity_c_DisplayClass21_0__Class**)(modloader::win::memory::resolve_rva(0x0471E340));
        inline app::DiscoverAreasEntity_c_DisplayClass21_0__Class* get_class() {
            return il2cpp::get_nested_class<app::DiscoverAreasEntity_c_DisplayClass21_0__Class>(type_info, "Moon.Timeline", "DiscoverAreasEntity", "<>c__DisplayClass21_0");
        }
        inline app::DiscoverAreasEntity_c_DisplayClass21_0* create() {
            return il2cpp::create_object<app::DiscoverAreasEntity_c_DisplayClass21_0>(get_class());
        }
    } // namespace DiscoverAreasEntity_c_DisplayClass21_0
} // namespace app::classes::types
