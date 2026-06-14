#pragma once
#include <Modloader/app/structs/RaceData_RaceStartFaceDirection__Enum.h>
#include <Modloader/app/structs/RaceData_RaceStartFaceDirection__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RaceData_RaceStartFaceDirection__Enum {
        inline app::RaceData_RaceStartFaceDirection__Enum__Class** type_info() {
            static app::RaceData_RaceStartFaceDirection__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RaceData_RaceStartFaceDirection__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RaceData_RaceStartFaceDirection__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::RaceData_RaceStartFaceDirection__Enum__Class>(type_info(), "Moon.Race", "RaceData", "RaceStartFaceDirection");
        }
        inline app::RaceData_RaceStartFaceDirection__Enum* create() {
            return il2cpp::create_object<app::RaceData_RaceStartFaceDirection__Enum>(get_class());
        }
    } // namespace RaceData_RaceStartFaceDirection__Enum
} // namespace app::classes::types
