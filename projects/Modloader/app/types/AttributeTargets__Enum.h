#pragma once
#include <Modloader/app/structs/AttributeTargets__Enum.h>
#include <Modloader/app/structs/AttributeTargets__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AttributeTargets__Enum {
        inline app::AttributeTargets__Enum__Class** type_info() {
            static app::AttributeTargets__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AttributeTargets__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AttributeTargets__Enum__Class* get_class() {
            return il2cpp::get_class<app::AttributeTargets__Enum__Class>(type_info(), "System", "AttributeTargets");
        }
        inline app::AttributeTargets__Enum* create() {
            return il2cpp::create_object<app::AttributeTargets__Enum>(get_class());
        }
    } // namespace AttributeTargets__Enum
} // namespace app::classes::types
