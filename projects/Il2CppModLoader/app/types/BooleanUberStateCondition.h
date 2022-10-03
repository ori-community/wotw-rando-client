#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BooleanUberStateCondition {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BooleanUberStateCondition__Class** type_info;
        inline app::BooleanUberStateCondition__Class* get_class() {
            return il2cpp::get_class<app::BooleanUberStateCondition__Class>(type_info, "", "BooleanUberStateCondition");
        }
        inline app::BooleanUberStateCondition* create() {
            return il2cpp::create_object<app::BooleanUberStateCondition>(get_class());
        }
    } // namespace BooleanUberStateCondition
} // namespace app::classes::types
