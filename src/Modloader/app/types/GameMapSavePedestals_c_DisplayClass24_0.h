#pragma once
#include <Modloader/app/structs/GameMapSavePedestals_c_DisplayClass24_0.h>
#include <Modloader/app/structs/GameMapSavePedestals_c_DisplayClass24_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameMapSavePedestals_c_DisplayClass24_0 {
        inline app::GameMapSavePedestals_c_DisplayClass24_0__Class** type_info() {
            static app::GameMapSavePedestals_c_DisplayClass24_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GameMapSavePedestals_c_DisplayClass24_0__Class**)(modloader::win::memory::resolve_rva(0x04779418));
            }
            return cache;
        }
        inline app::GameMapSavePedestals_c_DisplayClass24_0__Class* get_class() {
            return il2cpp::get_nested_class<app::GameMapSavePedestals_c_DisplayClass24_0__Class>(type_info(), "", "GameMapSavePedestals", "<>c__DisplayClass24_0");
        }
        inline app::GameMapSavePedestals_c_DisplayClass24_0* create() {
            return il2cpp::create_object<app::GameMapSavePedestals_c_DisplayClass24_0>(get_class());
        }
    } // namespace GameMapSavePedestals_c_DisplayClass24_0
} // namespace app::classes::types
