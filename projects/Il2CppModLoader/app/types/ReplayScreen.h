#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ReplayScreen {
        inline app::ReplayScreen__Class** type_info = (app::ReplayScreen__Class**)(modloader::win::memory::resolve_rva(0x04735C30));
        inline app::ReplayScreen__Class* get_class() {
            return il2cpp::get_class<app::ReplayScreen__Class>(type_info, "", "ReplayScreen");
        }
        inline app::ReplayScreen* create() {
            return il2cpp::create_object<app::ReplayScreen>(get_class());
        }
    } // namespace ReplayScreen
} // namespace app::classes::types
