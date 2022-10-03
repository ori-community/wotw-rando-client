#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinHold_States {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinHold_States__Class** type_info;
        inline app::SeinHold_States__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinHold_States__Class>(type_info, "", "SeinHold", "States");
        }
        inline app::SeinHold_States* create() {
            return il2cpp::create_object<app::SeinHold_States>(get_class());
        }
    } // namespace SeinHold_States
} // namespace app::classes::types
