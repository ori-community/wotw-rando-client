#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XblAchievement__Array {
        inline app::XblAchievement__Array__Class** type_info = (app::XblAchievement__Array__Class**)(modloader::win::memory::resolve_rva(0x0475FE50));
        inline app::XblAchievement__Array__Class* get_class() {
            return il2cpp::get_class<app::XblAchievement__Array__Class>(type_info, "XGamingRuntime", "XblAchievement[]");
        }
        inline app::XblAchievement__Array* create() {
            return il2cpp::create_object<app::XblAchievement__Array>(get_class());
        }
    } // namespace XblAchievement__Array
} // namespace app::classes::types
