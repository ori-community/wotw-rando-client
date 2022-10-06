#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberWaterControl {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberWaterControl__Class** type_info;
        inline app::UberWaterControl__Class* get_class() {
            return il2cpp::get_class<app::UberWaterControl__Class>(type_info, "", "UberWaterControl");
        }
        inline app::UberWaterControl* create() {
            return il2cpp::create_object<app::UberWaterControl>(get_class());
        }
        inline app::UberWaterControl__Array* create_array(int size) {
            return il2cpp::array_new<app::UberWaterControl__Array>(get_class(), size);
        }
        inline app::UberWaterControl__Array* create_array(const std::vector<app::UberWaterControl*>& items) {
            return il2cpp::array_new<app::UberWaterControl__Array>(get_class(), items);
        }
    } // namespace UberWaterControl
} // namespace app::classes::types
