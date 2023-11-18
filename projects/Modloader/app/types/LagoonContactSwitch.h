#pragma once
#include <Modloader/app/structs/LagoonContactSwitch.h>
#include <Modloader/app/structs/LagoonContactSwitch__Array.h>
#include <Modloader/app/structs/LagoonContactSwitch__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LagoonContactSwitch {
        inline app::LagoonContactSwitch__Class** type_info() {
            static app::LagoonContactSwitch__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LagoonContactSwitch__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LagoonContactSwitch__Class* get_class() {
            return il2cpp::get_class<app::LagoonContactSwitch__Class>(type_info(), "", "LagoonContactSwitch");
        }
        inline app::LagoonContactSwitch* create() {
            return il2cpp::create_object<app::LagoonContactSwitch>(get_class());
        }
        inline app::LagoonContactSwitch__Array* create_array(int size) {
            return il2cpp::array_new<app::LagoonContactSwitch__Array>(get_class(), size);
        }
        inline app::LagoonContactSwitch__Array* create_array(const std::vector<app::LagoonContactSwitch*>& items) {
            return il2cpp::array_new<app::LagoonContactSwitch__Array>(get_class(), items);
        }
    } // namespace LagoonContactSwitch
} // namespace app::classes::types
