#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace InputTrigger {
        inline app::InputTrigger__Class** type_info = (app::InputTrigger__Class**)(modloader::win::memory::resolve_rva(0x047564E0));
        inline app::InputTrigger__Class* get_class() {
            return il2cpp::get_class<app::InputTrigger__Class>(type_info, "Moon.UI", "InputTrigger");
        }
        inline app::InputTrigger* create() {
            return il2cpp::create_object<app::InputTrigger>(get_class());
        }
    } // namespace InputTrigger
} // namespace app::classes::types
