#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XblAchievementProgression {
        inline app::XblAchievementProgression__Class** type_info = (app::XblAchievementProgression__Class**)(modloader::win::memory::resolve_rva(0x0476DDB8));
        inline app::XblAchievementProgression__Class* get_class() {
            return il2cpp::get_class<app::XblAchievementProgression__Class>(type_info, "XGamingRuntime", "XblAchievementProgression");
        }
        inline app::XblAchievementProgression* create() {
            return il2cpp::create_object<app::XblAchievementProgression>(get_class());
        }
    } // namespace XblAchievementProgression
} // namespace app::classes::types
