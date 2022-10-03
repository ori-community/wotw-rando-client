#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ControlItemCommand {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ControlItemCommand__Class** type_info;
        inline app::ControlItemCommand__Class* get_class() {
            return il2cpp::get_class<app::ControlItemCommand__Class>(type_info, "", "ControlItemCommand");
        }
        inline app::ControlItemCommand* create() {
            return il2cpp::create_object<app::ControlItemCommand>(get_class());
        }
    } // namespace ControlItemCommand
} // namespace app::classes::types
