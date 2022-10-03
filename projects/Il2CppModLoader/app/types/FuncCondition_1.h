#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FuncCondition_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FuncCondition_1__Class** type_info;
        inline app::FuncCondition_1__Class* get_class() {
            return il2cpp::get_class<app::FuncCondition_1__Class>(type_info, "fsm", "FuncCondition");
        }
        inline app::FuncCondition_1* create() {
            return il2cpp::create_object<app::FuncCondition_1>(get_class());
        }
        inline app::FuncCondition_1__Array* create_array(int size) {
            return il2cpp::array_new<app::FuncCondition_1__Array>(get_class(), size);
        }
    } // namespace FuncCondition_1
} // namespace app::classes::types
