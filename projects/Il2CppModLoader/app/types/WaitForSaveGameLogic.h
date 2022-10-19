#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WaitForSaveGameLogic {
        inline app::WaitForSaveGameLogic__Class** type_info = (app::WaitForSaveGameLogic__Class**)(modloader::win::memory::resolve_rva(0x04750728));
        inline app::WaitForSaveGameLogic__Class* get_class() {
            return il2cpp::get_class<app::WaitForSaveGameLogic__Class>(type_info, "", "WaitForSaveGameLogic");
        }
        inline app::WaitForSaveGameLogic* create() {
            return il2cpp::create_object<app::WaitForSaveGameLogic>(get_class());
        }
    } // namespace WaitForSaveGameLogic
} // namespace app::classes::types
