#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberWaterReflectionView_GroupType__Enum {
        namespace {
            inline app::UberWaterReflectionView_GroupType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::UberWaterReflectionView_GroupType__Enum__Class** type_info = &type_info_ref;
        inline app::UberWaterReflectionView_GroupType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::UberWaterReflectionView_GroupType__Enum__Class>(type_info, "", "UberWaterReflectionView", "GroupType");
        }
        inline app::UberWaterReflectionView_GroupType__Enum* create() {
            return il2cpp::create_object<app::UberWaterReflectionView_GroupType__Enum>(get_class());
        }
    } // namespace UberWaterReflectionView_GroupType__Enum
} // namespace app::classes::types
