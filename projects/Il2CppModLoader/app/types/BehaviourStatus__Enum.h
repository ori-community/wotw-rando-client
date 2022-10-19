#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BehaviourStatus__Enum {
        inline app::BehaviourStatus__Enum__Class** type_info = (app::BehaviourStatus__Enum__Class**)(modloader::win::memory::resolve_rva(0x047787A0));
        inline app::BehaviourStatus__Enum__Class* get_class() {
            return il2cpp::get_class<app::BehaviourStatus__Enum__Class>(type_info, "Moon.BehaviourSystem", "BehaviourStatus");
        }
        inline app::BehaviourStatus__Enum* create() {
            return il2cpp::create_object<app::BehaviourStatus__Enum>(get_class());
        }
    } // namespace BehaviourStatus__Enum
} // namespace app::classes::types
