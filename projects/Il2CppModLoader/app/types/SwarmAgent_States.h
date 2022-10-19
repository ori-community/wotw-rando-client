#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SwarmAgent_States {
        inline app::SwarmAgent_States__Class** type_info = (app::SwarmAgent_States__Class**)(modloader::win::memory::resolve_rva(0x04760688));
        inline app::SwarmAgent_States__Class* get_class() {
            return il2cpp::get_nested_class<app::SwarmAgent_States__Class>(type_info, "", "SwarmAgent", "States");
        }
        inline app::SwarmAgent_States* create() {
            return il2cpp::create_object<app::SwarmAgent_States>(get_class());
        }
    } // namespace SwarmAgent_States
} // namespace app::classes::types
