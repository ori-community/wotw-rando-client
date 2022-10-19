#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace InputField_SubmitEvent {
        inline app::InputField_SubmitEvent__Class** type_info = (app::InputField_SubmitEvent__Class**)(modloader::win::memory::resolve_rva(0x0473A418));
        inline app::InputField_SubmitEvent__Class* get_class() {
            return il2cpp::get_nested_class<app::InputField_SubmitEvent__Class>(type_info, "UnityEngine.UI", "InputField", "SubmitEvent");
        }
        inline app::InputField_SubmitEvent* create() {
            return il2cpp::create_object<app::InputField_SubmitEvent>(get_class());
        }
    } // namespace InputField_SubmitEvent
} // namespace app::classes::types
