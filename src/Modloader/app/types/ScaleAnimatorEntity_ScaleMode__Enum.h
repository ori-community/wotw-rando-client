#pragma once
#include <Modloader/app/structs/ScaleAnimatorEntity_ScaleMode__Enum.h>
#include <Modloader/app/structs/ScaleAnimatorEntity_ScaleMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScaleAnimatorEntity_ScaleMode__Enum {
        inline app::ScaleAnimatorEntity_ScaleMode__Enum__Class** type_info() {
            static app::ScaleAnimatorEntity_ScaleMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ScaleAnimatorEntity_ScaleMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ScaleAnimatorEntity_ScaleMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ScaleAnimatorEntity_ScaleMode__Enum__Class>(type_info(), "Moon.Timeline", "ScaleAnimatorEntity", "ScaleMode");
        }
        inline app::ScaleAnimatorEntity_ScaleMode__Enum* create() {
            return il2cpp::create_object<app::ScaleAnimatorEntity_ScaleMode__Enum>(get_class());
        }
    } // namespace ScaleAnimatorEntity_ScaleMode__Enum
} // namespace app::classes::types
