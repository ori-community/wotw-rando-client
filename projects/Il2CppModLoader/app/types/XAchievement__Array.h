#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XAchievement__Array {
        namespace {
            app::XAchievement__Array__Class* type_info_ref = nullptr;
        }
        app::XAchievement__Array__Class** type_info = &type_info_ref;
        inline app::XAchievement__Array__Class* get_class() {
            return il2cpp::get_class<app::XAchievement__Array__Class>(type_info, "SystemIntegration.Synchronizer.Achievements", "XAchievement[]");
        }
        inline app::XAchievement__Array* create() {
            return il2cpp::create_object<app::XAchievement__Array>(get_class());
        }
    } // namespace XAchievement__Array
} // namespace app::classes::types
