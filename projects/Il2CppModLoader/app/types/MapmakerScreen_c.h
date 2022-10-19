#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MapmakerScreen_c {
        inline app::MapmakerScreen_c__Class** type_info = (app::MapmakerScreen_c__Class**)(modloader::win::memory::resolve_rva(0x04782E70));
        inline app::MapmakerScreen_c__Class* get_class() {
            return il2cpp::get_nested_class<app::MapmakerScreen_c__Class>(type_info, "", "MapmakerScreen", "<>c");
        }
        inline app::MapmakerScreen_c* create() {
            return il2cpp::create_object<app::MapmakerScreen_c>(get_class());
        }
    } // namespace MapmakerScreen_c
} // namespace app::classes::types
