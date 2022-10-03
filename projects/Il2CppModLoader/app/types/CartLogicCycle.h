#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CartLogicCycle {
        namespace {
            app::CartLogicCycle__Class* type_info_ref = nullptr;
        }
        app::CartLogicCycle__Class** type_info = &type_info_ref;
        inline app::CartLogicCycle__Class* get_class() {
            return il2cpp::get_class<app::CartLogicCycle__Class>(type_info, "", "CartLogicCycle");
        }
        inline app::CartLogicCycle* create() {
            return il2cpp::create_object<app::CartLogicCycle>(get_class());
        }
    } // namespace CartLogicCycle
} // namespace app::classes::types
