#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HeatUpPlatform_State__Enum__Class.h>
#include <Modloader/app/structs/HeatUpPlatform_State__Enum.h>

namespace app::classes::types {
    namespace HeatUpPlatform_State__Enum {
        namespace {
            inline app::HeatUpPlatform_State__Enum__Class* type_info_ref = nullptr;
        }
        inline app::HeatUpPlatform_State__Enum__Class** type_info = &type_info_ref;
        inline app::HeatUpPlatform_State__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::HeatUpPlatform_State__Enum__Class>(type_info, "", "HeatUpPlatform", "State");
        }
        inline app::HeatUpPlatform_State__Enum* create() {
            return il2cpp::create_object<app::HeatUpPlatform_State__Enum>(get_class());
        }
    } // namespace HeatUpPlatform_State__Enum
} // namespace app::classes::types
