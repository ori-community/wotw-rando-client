#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GameMapSavePedestals_c_DisplayClass24_0 {
        inline app::GameMapSavePedestals_c_DisplayClass24_0__Class** type_info = (app::GameMapSavePedestals_c_DisplayClass24_0__Class**)(modloader::win::memory::resolve_rva(0x04779418));
        inline app::GameMapSavePedestals_c_DisplayClass24_0__Class* get_class() {
            return il2cpp::get_nested_class<app::GameMapSavePedestals_c_DisplayClass24_0__Class>(type_info, "", "GameMapSavePedestals", "<>c__DisplayClass24_0");
        }
        inline app::GameMapSavePedestals_c_DisplayClass24_0* create() {
            return il2cpp::create_object<app::GameMapSavePedestals_c_DisplayClass24_0>(get_class());
        }
    } // namespace GameMapSavePedestals_c_DisplayClass24_0
} // namespace app::classes::types
