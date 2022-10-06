#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FuncCondition {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FuncCondition__Class** type_info;
        inline app::FuncCondition__Class* get_class() {
            return il2cpp::get_class<app::FuncCondition__Class>(type_info, "Moon.InteractionGraph", "FuncCondition");
        }
        inline app::FuncCondition* create() {
            return il2cpp::create_object<app::FuncCondition>(get_class());
        }
        inline app::FuncCondition__Array* create_array(int size) {
            return il2cpp::array_new<app::FuncCondition__Array>(get_class(), size);
        }
        inline app::FuncCondition__Array* create_array(const std::vector<app::FuncCondition*>& items) {
            return il2cpp::array_new<app::FuncCondition__Array>(get_class(), items);
        }
    } // namespace FuncCondition
} // namespace app::classes::types
