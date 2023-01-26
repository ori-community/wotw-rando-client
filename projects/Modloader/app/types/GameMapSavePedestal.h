#pragma once
#include <Modloader/app/structs/GameMapSavePedestal.h>
#include <Modloader/app/structs/GameMapSavePedestal__Array.h>
#include <Modloader/app/structs/GameMapSavePedestal__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameMapSavePedestal {
        inline app::GameMapSavePedestal__Class** type_info() {
            static app::GameMapSavePedestal__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GameMapSavePedestal__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GameMapSavePedestal__Class* get_class() {
            return il2cpp::get_class<app::GameMapSavePedestal__Class>(type_info(), "", "GameMapSavePedestal");
        }
        inline app::GameMapSavePedestal* create() {
            return il2cpp::create_object<app::GameMapSavePedestal>(get_class());
        }
        inline app::GameMapSavePedestal__Array* create_array(int size) {
            return il2cpp::array_new<app::GameMapSavePedestal__Array>(get_class(), size);
        }
        inline app::GameMapSavePedestal__Array* create_array(const std::vector<app::GameMapSavePedestal*>& items) {
            return il2cpp::array_new<app::GameMapSavePedestal__Array>(get_class(), items);
        }
    } // namespace GameMapSavePedestal
} // namespace app::classes::types
