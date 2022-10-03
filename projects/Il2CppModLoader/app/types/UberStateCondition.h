#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberStateCondition {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberStateCondition__Class** type_info;
        inline app::UberStateCondition__Class* get_class() {
            return il2cpp::get_class<app::UberStateCondition__Class>(type_info, "", "UberStateCondition");
        }
        inline app::UberStateCondition* create() {
            return il2cpp::create_object<app::UberStateCondition>(get_class());
        }
        inline app::UberStateCondition__Array* create_array(int size) {
            return il2cpp::array_new<app::UberStateCondition__Array>(get_class(), size);
        }
    } // namespace UberStateCondition
} // namespace app::classes::types
