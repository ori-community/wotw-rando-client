#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RaceMenuScreenPlaceholder {
        namespace {
            app::RaceMenuScreenPlaceholder__Class* type_info_ref = nullptr;
        }
        app::RaceMenuScreenPlaceholder__Class** type_info = &type_info_ref;
        inline app::RaceMenuScreenPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::RaceMenuScreenPlaceholder__Class>(type_info, "", "RaceMenuScreenPlaceholder");
        }
        inline app::RaceMenuScreenPlaceholder* create() {
            return il2cpp::create_object<app::RaceMenuScreenPlaceholder>(get_class());
        }
    } // namespace RaceMenuScreenPlaceholder
} // namespace app::classes::types
