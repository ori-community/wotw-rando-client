#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LegacyPressurePlate_Target__Enum__Class.h>
#include <Modloader/app/structs/LegacyPressurePlate_Target__Enum.h>

namespace app::classes::types {
    namespace LegacyPressurePlate_Target__Enum {
        namespace {
            inline app::LegacyPressurePlate_Target__Enum__Class* type_info_ref = nullptr;
        }
        inline app::LegacyPressurePlate_Target__Enum__Class** type_info = &type_info_ref;
        inline app::LegacyPressurePlate_Target__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::LegacyPressurePlate_Target__Enum__Class>(type_info, "", "LegacyPressurePlate", "Target");
        }
        inline app::LegacyPressurePlate_Target__Enum* create() {
            return il2cpp::create_object<app::LegacyPressurePlate_Target__Enum>(get_class());
        }
    } // namespace LegacyPressurePlate_Target__Enum
} // namespace app::classes::types
