#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ICondition {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ICondition__Class** type_info;
        inline app::ICondition__Class* get_class() {
            return il2cpp::get_class<app::ICondition__Class>(type_info, "", "ICondition");
        }
        inline app::ICondition__Array* create_array(int size) {
            return il2cpp::array_new<app::ICondition__Array>(get_class(), size);
        }
    } // namespace ICondition
} // namespace app::classes::types
