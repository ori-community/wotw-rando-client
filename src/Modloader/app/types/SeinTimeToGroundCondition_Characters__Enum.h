#pragma once
#include <Modloader/app/structs/SeinTimeToGroundCondition_Characters__Enum.h>
#include <Modloader/app/structs/SeinTimeToGroundCondition_Characters__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinTimeToGroundCondition_Characters__Enum {
        inline app::SeinTimeToGroundCondition_Characters__Enum__Class** type_info() {
            static app::SeinTimeToGroundCondition_Characters__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinTimeToGroundCondition_Characters__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinTimeToGroundCondition_Characters__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinTimeToGroundCondition_Characters__Enum__Class>(type_info(), "", "SeinTimeToGroundCondition", "Characters");
        }
        inline app::SeinTimeToGroundCondition_Characters__Enum* create() {
            return il2cpp::create_object<app::SeinTimeToGroundCondition_Characters__Enum>(get_class());
        }
    } // namespace SeinTimeToGroundCondition_Characters__Enum
} // namespace app::classes::types
