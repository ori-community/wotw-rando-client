#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RaceMenuScreenMemoriesPage {
        namespace {
            app::RaceMenuScreenMemoriesPage__Class* type_info_ref = nullptr;
        }
        app::RaceMenuScreenMemoriesPage__Class** type_info = &type_info_ref;
        inline app::RaceMenuScreenMemoriesPage__Class* get_class() {
            return il2cpp::get_class<app::RaceMenuScreenMemoriesPage__Class>(type_info, "", "RaceMenuScreenMemoriesPage");
        }
        inline app::RaceMenuScreenMemoriesPage* create() {
            return il2cpp::create_object<app::RaceMenuScreenMemoriesPage>(get_class());
        }
    } // namespace RaceMenuScreenMemoriesPage
} // namespace app::classes::types
