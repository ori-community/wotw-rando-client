#pragma once
#include <Modloader/app/structs/ExposedPropertyCategory__Enum.h>
#include <Modloader/app/structs/ExposedPropertyCategory__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExposedPropertyCategory__Enum {
        inline app::ExposedPropertyCategory__Enum__Class** type_info() {
            static app::ExposedPropertyCategory__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ExposedPropertyCategory__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ExposedPropertyCategory__Enum__Class* get_class() {
            return il2cpp::get_class<app::ExposedPropertyCategory__Enum__Class>(type_info(), "Moon.ExposedPropertiesInspector", "ExposedPropertyCategory");
        }
        inline app::ExposedPropertyCategory__Enum* create() {
            return il2cpp::create_object<app::ExposedPropertyCategory__Enum>(get_class());
        }
    } // namespace ExposedPropertyCategory__Enum
} // namespace app::classes::types
