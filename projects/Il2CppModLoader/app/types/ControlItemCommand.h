#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ControlItemCommand {
        inline app::ControlItemCommand__Class** type_info = (app::ControlItemCommand__Class**)(modloader::win::memory::resolve_rva(0x04701A58));
        inline app::ControlItemCommand__Class* get_class() {
            return il2cpp::get_class<app::ControlItemCommand__Class>(type_info, "", "ControlItemCommand");
        }
        inline app::ControlItemCommand* create() {
            return il2cpp::create_object<app::ControlItemCommand>(get_class());
        }
    } // namespace ControlItemCommand
} // namespace app::classes::types
