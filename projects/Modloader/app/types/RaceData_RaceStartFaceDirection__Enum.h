#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RaceData_RaceStartFaceDirection__Enum {
        namespace {
            inline app::RaceData_RaceStartFaceDirection__Enum__Class* type_info_ref = nullptr;
        }
        inline app::RaceData_RaceStartFaceDirection__Enum__Class** type_info = &type_info_ref;
        inline app::RaceData_RaceStartFaceDirection__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::RaceData_RaceStartFaceDirection__Enum__Class>(type_info, "Moon.Race", "RaceData", "RaceStartFaceDirection");
        }
        inline app::RaceData_RaceStartFaceDirection__Enum* create() {
            return il2cpp::create_object<app::RaceData_RaceStartFaceDirection__Enum>(get_class());
        }
    } // namespace RaceData_RaceStartFaceDirection__Enum
} // namespace app::classes::types
