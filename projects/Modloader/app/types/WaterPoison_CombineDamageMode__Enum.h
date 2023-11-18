#pragma once
#include <Modloader/app/structs/WaterPoison_CombineDamageMode__Enum.h>
#include <Modloader/app/structs/WaterPoison_CombineDamageMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaterPoison_CombineDamageMode__Enum {
        inline app::WaterPoison_CombineDamageMode__Enum__Class** type_info() {
            static app::WaterPoison_CombineDamageMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WaterPoison_CombineDamageMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WaterPoison_CombineDamageMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::WaterPoison_CombineDamageMode__Enum__Class>(type_info(), "", "WaterPoison", "CombineDamageMode");
        }
        inline app::WaterPoison_CombineDamageMode__Enum* create() {
            return il2cpp::create_object<app::WaterPoison_CombineDamageMode__Enum>(get_class());
        }
    } // namespace WaterPoison_CombineDamageMode__Enum
} // namespace app::classes::types
