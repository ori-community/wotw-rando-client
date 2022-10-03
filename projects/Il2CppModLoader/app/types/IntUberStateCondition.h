#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IntUberStateCondition {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IntUberStateCondition__Class** type_info;
        inline app::IntUberStateCondition__Class* get_class() {
            return il2cpp::get_class<app::IntUberStateCondition__Class>(type_info, "", "IntUberStateCondition");
        }
        inline app::IntUberStateCondition* create() {
            return il2cpp::create_object<app::IntUberStateCondition>(get_class());
        }
    } // namespace IntUberStateCondition
} // namespace app::classes::types
