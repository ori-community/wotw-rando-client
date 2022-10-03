#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinLogicCycle_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinLogicCycle_c__Class** type_info;
        inline app::SeinLogicCycle_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinLogicCycle_c__Class>(type_info, "", "SeinLogicCycle", "<>c");
        }
        inline app::SeinLogicCycle_c* create() {
            return il2cpp::create_object<app::SeinLogicCycle_c>(get_class());
        }
    } // namespace SeinLogicCycle_c
} // namespace app::classes::types
