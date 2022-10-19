#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IAction {
        inline app::IAction__Class** type_info = (app::IAction__Class**)(modloader::win::memory::resolve_rva(0x04712F58));
        inline app::IAction__Class* get_class() {
            return il2cpp::get_class<app::IAction__Class>(type_info, "", "IAction");
        }
    } // namespace IAction
} // namespace app::classes::types
