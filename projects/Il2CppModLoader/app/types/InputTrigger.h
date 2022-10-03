#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InputTrigger {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InputTrigger__Class** type_info;
        inline app::InputTrigger__Class* get_class() {
            return il2cpp::get_class<app::InputTrigger__Class>(type_info, "Moon.UI", "InputTrigger");
        }
        inline app::InputTrigger* create() {
            return il2cpp::create_object<app::InputTrigger>(get_class());
        }
    } // namespace InputTrigger
} // namespace app::classes::types
