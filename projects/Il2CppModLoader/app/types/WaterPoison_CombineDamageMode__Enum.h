#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WaterPoison_CombineDamageMode__Enum {
        namespace {
            app::WaterPoison_CombineDamageMode__Enum__Class* type_info_ref = nullptr;
        }
        app::WaterPoison_CombineDamageMode__Enum__Class** type_info = &type_info_ref;
        inline app::WaterPoison_CombineDamageMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::WaterPoison_CombineDamageMode__Enum__Class>(type_info, "", "WaterPoison", "CombineDamageMode");
        }
        inline app::WaterPoison_CombineDamageMode__Enum* create() {
            return il2cpp::create_object<app::WaterPoison_CombineDamageMode__Enum>(get_class());
        }
    } // namespace WaterPoison_CombineDamageMode__Enum
} // namespace app::classes::types
