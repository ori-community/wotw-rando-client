#pragma once
#include <Modloader/app/structs/SeinOnGroundCondition_Characters__Enum.h>
#include <Modloader/app/structs/SeinOnGroundCondition_Characters__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinOnGroundCondition_Characters__Enum {
        inline app::SeinOnGroundCondition_Characters__Enum__Class** type_info() {
            static app::SeinOnGroundCondition_Characters__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinOnGroundCondition_Characters__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinOnGroundCondition_Characters__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinOnGroundCondition_Characters__Enum__Class>(type_info(), "", "SeinOnGroundCondition", "Characters");
        }
        inline app::SeinOnGroundCondition_Characters__Enum* create() {
            return il2cpp::create_object<app::SeinOnGroundCondition_Characters__Enum>(get_class());
        }
    } // namespace SeinOnGroundCondition_Characters__Enum
} // namespace app::classes::types
