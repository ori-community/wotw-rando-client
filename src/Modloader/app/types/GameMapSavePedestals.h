#pragma once
#include <Modloader/app/structs/GameMapSavePedestals.h>
#include <Modloader/app/structs/GameMapSavePedestals__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameMapSavePedestals {
        inline app::GameMapSavePedestals__Class** type_info() {
            static app::GameMapSavePedestals__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GameMapSavePedestals__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GameMapSavePedestals__Class* get_class() {
            return il2cpp::get_class<app::GameMapSavePedestals__Class>(type_info(), "", "GameMapSavePedestals");
        }
        inline app::GameMapSavePedestals* create() {
            return il2cpp::create_object<app::GameMapSavePedestals>(get_class());
        }
    } // namespace GameMapSavePedestals
} // namespace app::classes::types
