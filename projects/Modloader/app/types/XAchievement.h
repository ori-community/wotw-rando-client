#pragma once
#include <Modloader/app/structs/XAchievement.h>
#include <Modloader/app/structs/XAchievement__Array.h>
#include <Modloader/app/structs/XAchievement__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XAchievement {
        inline app::XAchievement__Class** type_info() {
            static app::XAchievement__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XAchievement__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XAchievement__Class* get_class() {
            return il2cpp::get_class<app::XAchievement__Class>(type_info(), "SystemIntegration.Synchronizer.Achievements", "XAchievement");
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
