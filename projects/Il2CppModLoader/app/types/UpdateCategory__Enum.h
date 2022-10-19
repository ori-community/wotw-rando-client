#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UpdateCategory__Enum {
        namespace {
            inline app::UpdateCategory__Enum__Class* type_info_ref = nullptr;
        }
        inline app::UpdateCategory__Enum__Class** type_info = &type_info_ref;
        inline app::UpdateCategory__Enum__Class* get_class() {
            return il2cpp::get_class<app::UpdateCategory__Enum__Class>(type_info, "Moon", "UpdateCategory");
        }
        inline app::UpdateCategory__Enum* create() {
            return il2cpp::create_object<app::UpdateCategory__Enum>(get_class());
        }
    } // namespace UpdateCategory__Enum
} // namespace app::classes::types
