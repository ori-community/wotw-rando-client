#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ScaleAnimatorEntity_ScaleMode__Enum {
        namespace {
            app::ScaleAnimatorEntity_ScaleMode__Enum__Class* type_info_ref = nullptr;
        }
        app::ScaleAnimatorEntity_ScaleMode__Enum__Class** type_info = &type_info_ref;
        inline app::ScaleAnimatorEntity_ScaleMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ScaleAnimatorEntity_ScaleMode__Enum__Class>(type_info, "Moon.Timeline", "ScaleAnimatorEntity", "ScaleMode");
        }
        inline app::ScaleAnimatorEntity_ScaleMode__Enum* create() {
            return il2cpp::create_object<app::ScaleAnimatorEntity_ScaleMode__Enum>(get_class());
        }
    } // namespace ScaleAnimatorEntity_ScaleMode__Enum
} // namespace app::classes::types
