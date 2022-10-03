#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RaceDataCache__Array {
        namespace {
            app::RaceDataCache__Array__Class* type_info_ref = nullptr;
        }
        app::RaceDataCache__Array__Class** type_info = &type_info_ref;
        inline app::RaceDataCache__Array__Class* get_class() {
            return il2cpp::get_class<app::RaceDataCache__Array__Class>(type_info, "SystemIntegration.Races", "RaceDataCache[]");
        }
        inline app::RaceDataCache__Array* create() {
            return il2cpp::create_object<app::RaceDataCache__Array>(get_class());
        }
    } // namespace RaceDataCache__Array
} // namespace app::classes::types
