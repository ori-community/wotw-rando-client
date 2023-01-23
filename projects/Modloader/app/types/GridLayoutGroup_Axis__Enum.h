#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GridLayoutGroup_Axis__Enum__Class.h>
#include <Modloader/app/structs/GridLayoutGroup_Axis__Enum.h>

namespace app::classes::types {
    namespace GridLayoutGroup_Axis__Enum {
        namespace {
            inline app::GridLayoutGroup_Axis__Enum__Class* type_info_ref = nullptr;
        }
        inline app::GridLayoutGroup_Axis__Enum__Class** type_info = &type_info_ref;
        inline app::GridLayoutGroup_Axis__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::GridLayoutGroup_Axis__Enum__Class>(type_info, "UnityEngine.UI", "GridLayoutGroup", "Axis");
        }
        inline app::GridLayoutGroup_Axis__Enum* create() {
            return il2cpp::create_object<app::GridLayoutGroup_Axis__Enum>(get_class());
        }
    } // namespace GridLayoutGroup_Axis__Enum
} // namespace app::classes::types
