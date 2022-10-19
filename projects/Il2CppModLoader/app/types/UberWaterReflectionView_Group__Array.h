#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberWaterReflectionView_Group__Array {
        namespace {
            inline app::UberWaterReflectionView_Group__Array__Class* type_info_ref = nullptr;
        }
        inline app::UberWaterReflectionView_Group__Array__Class** type_info = &type_info_ref;
        inline app::UberWaterReflectionView_Group__Array__Class* get_class() {
            return il2cpp::get_class<app::UberWaterReflectionView_Group__Array__Class>(type_info, "", "UberWaterReflectionView+Group[]");
        }
        inline app::UberWaterReflectionView_Group__Array* create() {
            return il2cpp::create_object<app::UberWaterReflectionView_Group__Array>(get_class());
        }
    } // namespace UberWaterReflectionView_Group__Array
} // namespace app::classes::types
