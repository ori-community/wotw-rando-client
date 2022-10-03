#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberWaterCross {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberWaterCross__Class** type_info;
        inline app::UberWaterCross__Class* get_class() {
            return il2cpp::get_class<app::UberWaterCross__Class>(type_info, "", "UberWaterCross");
        }
        inline app::UberWaterCross* create() {
            return il2cpp::create_object<app::UberWaterCross>(get_class());
        }
        inline app::UberWaterCross__Array* create_array(int size) {
            return il2cpp::array_new<app::UberWaterCross__Array>(get_class(), size);
        }
    } // namespace UberWaterCross
} // namespace app::classes::types
