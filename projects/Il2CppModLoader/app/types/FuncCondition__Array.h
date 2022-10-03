#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FuncCondition__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FuncCondition__Array__Class** type_info;
        inline app::FuncCondition__Array__Class* get_class() {
            return il2cpp::get_class<app::FuncCondition__Array__Class>(type_info, "Moon.InteractionGraph", "FuncCondition[]");
        }
        inline app::FuncCondition__Array* create() {
            return il2cpp::create_object<app::FuncCondition__Array>(get_class());
        }
    } // namespace FuncCondition__Array
} // namespace app::classes::types
