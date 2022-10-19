#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GameControllerLate {
        inline app::GameControllerLate__Class** type_info = (app::GameControllerLate__Class**)(modloader::win::memory::resolve_rva(0x04702018));
        inline app::GameControllerLate__Class* get_class() {
            return il2cpp::get_class<app::GameControllerLate__Class>(type_info, "", "GameControllerLate");
        }
        inline app::GameControllerLate* create() {
            return il2cpp::create_object<app::GameControllerLate>(get_class());
        }
    } // namespace GameControllerLate
} // namespace app::classes::types
