#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberWaterTop {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberWaterTop__Class** type_info;
        inline app::UberWaterTop__Class* get_class() {
            return il2cpp::get_class<app::UberWaterTop__Class>(type_info, "", "UberWaterTop");
        }
        inline app::UberWaterTop* create() {
            return il2cpp::create_object<app::UberWaterTop>(get_class());
        }
        inline app::UberWaterTop__Array* create_array(int size) {
            return il2cpp::array_new<app::UberWaterTop__Array>(get_class(), size);
        }
        inline app::UberWaterTop__Array* create_array(const std::vector<app::UberWaterTop*>& items) {
            return il2cpp::array_new<app::UberWaterTop__Array>(get_class(), items);
        }
    } // namespace UberWaterTop
} // namespace app::classes::types
