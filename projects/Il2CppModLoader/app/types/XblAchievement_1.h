#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XblAchievement_1 {
        inline app::XblAchievement_1__Class** type_info = (app::XblAchievement_1__Class**)(modloader::win::memory::resolve_rva(0x04732490));
        inline app::XblAchievement_1__Class* get_class() {
            return il2cpp::get_class<app::XblAchievement_1__Class>(type_info, "XGamingRuntime.Interop", "XblAchievement");
        }
        inline app::XblAchievement_1* create() {
            return il2cpp::create_object<app::XblAchievement_1>(get_class());
        }
        inline app::XblAchievement_1__Boxed* box(app::XblAchievement_1 value) {
            return il2cpp::box_value<app::XblAchievement_1__Boxed>(get_class(), value);
        }
    } // namespace XblAchievement_1
} // namespace app::classes::types
