#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InWaterBrain {
        namespace {
            app::InWaterBrain__Class* type_info_ref = nullptr;
        }
        app::InWaterBrain__Class** type_info = &type_info_ref;
        inline app::InWaterBrain__Class* get_class() {
            return il2cpp::get_class<app::InWaterBrain__Class>(type_info, "", "InWaterBrain");
        }
        inline app::InWaterBrain* create() {
            return il2cpp::create_object<app::InWaterBrain>(get_class());
        }
    } // namespace InWaterBrain
} // namespace app::classes::types
