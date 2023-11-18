#pragma once
#include <Modloader/app/structs/GameMapSavePedestal__Array.h>
#include <Modloader/app/structs/GameMapSavePedestal__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameMapSavePedestal__Array {
        inline app::GameMapSavePedestal__Array__Class** type_info() {
            static app::GameMapSavePedestal__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GameMapSavePedestal__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GameMapSavePedestal__Array__Class* get_class() {
            return il2cpp::get_class<app::GameMapSavePedestal__Array__Class>(type_info(), "", "GameMapSavePedestal[]");
        }
        inline app::GameMapSavePedestal__Array* create() {
            return il2cpp::create_object<app::GameMapSavePedestal__Array>(get_class());
        }
    } // namespace GameMapSavePedestal__Array
} // namespace app::classes::types
