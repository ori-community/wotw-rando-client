#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberStateValueCondition {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberStateValueCondition__Class** type_info;
        inline app::UberStateValueCondition__Class* get_class() {
            return il2cpp::get_class<app::UberStateValueCondition__Class>(type_info, "", "UberStateValueCondition");
        }
        inline app::UberStateValueCondition* create() {
            return il2cpp::create_object<app::UberStateValueCondition>(get_class());
        }
    } // namespace UberStateValueCondition
} // namespace app::classes::types
