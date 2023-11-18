#pragma once
#include <Modloader/app/structs/RaceMenuScreenMemoriesPage.h>
#include <Modloader/app/structs/RaceMenuScreenMemoriesPage__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RaceMenuScreenMemoriesPage {
        inline app::RaceMenuScreenMemoriesPage__Class** type_info() {
            static app::RaceMenuScreenMemoriesPage__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RaceMenuScreenMemoriesPage__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RaceMenuScreenMemoriesPage__Class* get_class() {
            return il2cpp::get_class<app::RaceMenuScreenMemoriesPage__Class>(type_info(), "", "RaceMenuScreenMemoriesPage");
        }
        inline app::RaceMenuScreenMemoriesPage* create() {
            return il2cpp::create_object<app::RaceMenuScreenMemoriesPage>(get_class());
        }
    } // namespace RaceMenuScreenMemoriesPage
} // namespace app::classes::types
