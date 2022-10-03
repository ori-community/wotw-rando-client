#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinLogicCycle {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinLogicCycle__Class** type_info;
        inline app::SeinLogicCycle__Class* get_class() {
            return il2cpp::get_class<app::SeinLogicCycle__Class>(type_info, "", "SeinLogicCycle");
        }
        inline app::SeinLogicCycle* create() {
            return il2cpp::create_object<app::SeinLogicCycle>(get_class());
        }
    } // namespace SeinLogicCycle
} // namespace app::classes::types
