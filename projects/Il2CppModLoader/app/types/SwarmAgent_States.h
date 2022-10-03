#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SwarmAgent_States {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SwarmAgent_States__Class** type_info;
        inline app::SwarmAgent_States__Class* get_class() {
            return il2cpp::get_nested_class<app::SwarmAgent_States__Class>(type_info, "", "SwarmAgent", "States");
        }
        inline app::SwarmAgent_States* create() {
            return il2cpp::create_object<app::SwarmAgent_States>(get_class());
        }
    } // namespace SwarmAgent_States
} // namespace app::classes::types
