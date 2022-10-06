#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XblAchievement {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XblAchievement__Class** type_info;
        inline app::XblAchievement__Class* get_class() {
            return il2cpp::get_class<app::XblAchievement__Class>(type_info, "XGamingRuntime", "XblAchievement");
        }
        inline app::XblAchievement* create() {
            return il2cpp::create_object<app::XblAchievement>(get_class());
        }
        inline app::XblAchievement__Array* create_array(int size) {
            return il2cpp::array_new<app::XblAchievement__Array>(get_class(), size);
        }
        inline app::XblAchievement__Array* create_array(const std::vector<app::XblAchievement*>& items) {
            return il2cpp::array_new<app::XblAchievement__Array>(get_class(), items);
        }
    } // namespace XblAchievement
} // namespace app::classes::types
