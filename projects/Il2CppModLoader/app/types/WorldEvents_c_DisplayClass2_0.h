#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WorldEvents_c_DisplayClass2_0 {
        inline app::WorldEvents_c_DisplayClass2_0__Class** type_info = (app::WorldEvents_c_DisplayClass2_0__Class**)(modloader::win::memory::resolve_rva(0x0475F698));
        inline app::WorldEvents_c_DisplayClass2_0__Class* get_class() {
            return il2cpp::get_nested_class<app::WorldEvents_c_DisplayClass2_0__Class>(type_info, "", "WorldEvents", "<>c__DisplayClass2_0");
        }
        inline app::WorldEvents_c_DisplayClass2_0* create() {
            return il2cpp::create_object<app::WorldEvents_c_DisplayClass2_0>(get_class());
        }
    } // namespace WorldEvents_c_DisplayClass2_0
} // namespace app::classes::types
