#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StatSetting_StatDisplayCategory__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::StatSetting_StatDisplayCategory__Enum__Class** type_info;
        inline app::StatSetting_StatDisplayCategory__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::StatSetting_StatDisplayCategory__Enum__Class>(type_info, "", "StatSetting", "StatDisplayCategory");
        }
        inline app::StatSetting_StatDisplayCategory__Enum* create() {
            return il2cpp::create_object<app::StatSetting_StatDisplayCategory__Enum>(get_class());
        }
    } // namespace StatSetting_StatDisplayCategory__Enum
} // namespace app::classes::types
