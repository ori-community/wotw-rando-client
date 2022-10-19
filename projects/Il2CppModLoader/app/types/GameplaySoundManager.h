#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GameplaySoundManager {
        inline app::GameplaySoundManager__Class** type_info = (app::GameplaySoundManager__Class**)(modloader::win::memory::resolve_rva(0x0473B560));
        inline app::GameplaySoundManager__Class* get_class() {
            return il2cpp::get_class<app::GameplaySoundManager__Class>(type_info, "", "GameplaySoundManager");
        }
        inline app::GameplaySoundManager* create() {
            return il2cpp::create_object<app::GameplaySoundManager>(get_class());
        }
    } // namespace GameplaySoundManager
} // namespace app::classes::types
