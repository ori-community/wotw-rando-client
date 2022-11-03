#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XAchievement {
        namespace {
            inline app::XAchievement__Class* type_info_ref = nullptr;
        }
        inline app::XAchievement__Class** type_info = &type_info_ref;
        inline app::XAchievement__Class* get_class() {
            return il2cpp::get_class<app::XAchievement__Class>(type_info, "SystemIntegration.Synchronizer.Achievements", "XAchievement");
        }
        inline app::XAchievement* create() {
            return il2cpp::create_object<app::XAchievement>(get_class());
        }
        inline app::XAchievement__Array* create_array(int size) {
            return il2cpp::array_new<app::XAchievement__Array>(get_class(), size);
        }
        inline app::XAchievement__Array* create_array(const std::vector<app::XAchievement*>& items) {
            return il2cpp::array_new<app::XAchievement__Array>(get_class(), items);
        }
    } // namespace XAchievement
} // namespace app::classes::types
