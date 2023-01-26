#pragma once
#include <Modloader/app/structs/ConstraintFlag__Enum.h>
#include <Modloader/app/structs/ConstraintFlag__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConstraintFlag__Enum {
        inline app::ConstraintFlag__Enum__Class** type_info() {
            static app::ConstraintFlag__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ConstraintFlag__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ConstraintFlag__Enum__Class* get_class() {
            return il2cpp::get_class<app::ConstraintFlag__Enum__Class>(type_info(), "Moon.Timeline", "ConstraintFlag");
        }
        inline app::ConstraintFlag__Enum* create() {
            return il2cpp::create_object<app::ConstraintFlag__Enum>(get_class());
        }
    } // namespace ConstraintFlag__Enum
} // namespace app::classes::types
