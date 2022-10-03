#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WeightedMode__Enum {
        namespace {
            app::WeightedMode__Enum__Class* type_info_ref = nullptr;
        }
        app::WeightedMode__Enum__Class** type_info = &type_info_ref;
        inline app::WeightedMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::WeightedMode__Enum__Class>(type_info, "UnityEngine", "WeightedMode");
        }
        inline app::WeightedMode__Enum* create() {
            return il2cpp::create_object<app::WeightedMode__Enum>(get_class());
        }
    } // namespace WeightedMode__Enum
} // namespace app::classes::types
