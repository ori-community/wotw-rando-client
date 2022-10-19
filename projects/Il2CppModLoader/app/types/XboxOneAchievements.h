#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XboxOneAchievements {
        inline app::XboxOneAchievements__Class** type_info = (app::XboxOneAchievements__Class**)(modloader::win::memory::resolve_rva(0x04722CC8));
        inline app::XboxOneAchievements__Class* get_class() {
            return il2cpp::get_class<app::XboxOneAchievements__Class>(type_info, "", "XboxOneAchievements");
        }
        inline app::XboxOneAchievements* create() {
            return il2cpp::create_object<app::XboxOneAchievements>(get_class());
        }
    } // namespace XboxOneAchievements
} // namespace app::classes::types
