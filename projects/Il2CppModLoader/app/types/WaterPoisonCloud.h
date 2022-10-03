#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WaterPoisonCloud {
        namespace {
            app::WaterPoisonCloud__Class* type_info_ref = nullptr;
        }
        app::WaterPoisonCloud__Class** type_info = &type_info_ref;
        inline app::WaterPoisonCloud__Class* get_class() {
            return il2cpp::get_class<app::WaterPoisonCloud__Class>(type_info, "", "WaterPoisonCloud");
        }
        inline app::WaterPoisonCloud* create() {
            return il2cpp::create_object<app::WaterPoisonCloud>(get_class());
        }
    } // namespace WaterPoisonCloud
} // namespace app::classes::types
