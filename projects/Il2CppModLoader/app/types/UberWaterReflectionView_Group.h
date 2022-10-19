#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberWaterReflectionView_Group {
        inline app::UberWaterReflectionView_Group__Class** type_info = (app::UberWaterReflectionView_Group__Class**)(modloader::win::memory::resolve_rva(0x04724860));
        inline app::UberWaterReflectionView_Group__Class* get_class() {
            return il2cpp::get_nested_class<app::UberWaterReflectionView_Group__Class>(type_info, "", "UberWaterReflectionView", "Group");
        }
        inline app::UberWaterReflectionView_Group* create() {
            return il2cpp::create_object<app::UberWaterReflectionView_Group>(get_class());
        }
        inline app::UberWaterReflectionView_Group__Array* create_array(int size) {
            return il2cpp::array_new<app::UberWaterReflectionView_Group__Array>(get_class(), size);
        }
        inline app::UberWaterReflectionView_Group__Array* create_array(const std::vector<app::UberWaterReflectionView_Group*>& items) {
            return il2cpp::array_new<app::UberWaterReflectionView_Group__Array>(get_class(), items);
        }
    } // namespace UberWaterReflectionView_Group
} // namespace app::classes::types
