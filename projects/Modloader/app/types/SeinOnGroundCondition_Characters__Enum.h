#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinOnGroundCondition_Characters__Enum__Class.h>
#include <Modloader/app/structs/SeinOnGroundCondition_Characters__Enum.h>

namespace app::classes::types {
    namespace SeinOnGroundCondition_Characters__Enum {
        namespace {
            inline app::SeinOnGroundCondition_Characters__Enum__Class* type_info_ref = nullptr;
        }
        inline app::SeinOnGroundCondition_Characters__Enum__Class** type_info = &type_info_ref;
        inline app::SeinOnGroundCondition_Characters__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinOnGroundCondition_Characters__Enum__Class>(type_info, "", "SeinOnGroundCondition", "Characters");
        }
        inline app::SeinOnGroundCondition_Characters__Enum* create() {
            return il2cpp::create_object<app::SeinOnGroundCondition_Characters__Enum>(get_class());
        }
    } // namespace SeinOnGroundCondition_Characters__Enum
} // namespace app::classes::types
