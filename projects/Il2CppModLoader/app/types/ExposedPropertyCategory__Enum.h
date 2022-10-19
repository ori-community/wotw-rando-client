#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ExposedPropertyCategory__Enum {
        namespace {
            inline app::ExposedPropertyCategory__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ExposedPropertyCategory__Enum__Class** type_info = &type_info_ref;
        inline app::ExposedPropertyCategory__Enum__Class* get_class() {
            return il2cpp::get_class<app::ExposedPropertyCategory__Enum__Class>(type_info, "Moon.ExposedPropertiesInspector", "ExposedPropertyCategory");
        }
        inline app::ExposedPropertyCategory__Enum* create() {
            return il2cpp::create_object<app::ExposedPropertyCategory__Enum>(get_class());
        }
    } // namespace ExposedPropertyCategory__Enum
} // namespace app::classes::types
