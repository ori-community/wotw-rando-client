#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WaterZone__Array {
        namespace {
            app::WaterZone__Array__Class* type_info_ref = nullptr;
        }
        app::WaterZone__Array__Class** type_info = &type_info_ref;
        inline app::WaterZone__Array__Class* get_class() {
            return il2cpp::get_class<app::WaterZone__Array__Class>(type_info, "", "WaterZone[]");
        }
        inline app::WaterZone__Array* create() {
            return il2cpp::create_object<app::WaterZone__Array>(get_class());
        }
    } // namespace WaterZone__Array
} // namespace app::classes::types
