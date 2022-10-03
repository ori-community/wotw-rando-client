#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RaceData_RaceDataState__Enum {
        namespace {
            app::RaceData_RaceDataState__Enum__Class* type_info_ref = nullptr;
        }
        app::RaceData_RaceDataState__Enum__Class** type_info = &type_info_ref;
        inline app::RaceData_RaceDataState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::RaceData_RaceDataState__Enum__Class>(type_info, "Moon.Race", "RaceData", "RaceDataState");
        }
        inline app::RaceData_RaceDataState__Enum* create() {
            return il2cpp::create_object<app::RaceData_RaceDataState__Enum>(get_class());
        }
    } // namespace RaceData_RaceDataState__Enum
} // namespace app::classes::types
