#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpaceMongerWidget_UberStateGroupDataSizeComparer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SpaceMongerWidget_UberStateGroupDataSizeComparer__Class** type_info;
        inline app::SpaceMongerWidget_UberStateGroupDataSizeComparer__Class* get_class() {
            return il2cpp::get_nested_class<app::SpaceMongerWidget_UberStateGroupDataSizeComparer__Class>(type_info, "Moon.UberStateVisualization", "SpaceMongerWidget", "UberStateGroupDataSizeComparer");
        }
        inline app::SpaceMongerWidget_UberStateGroupDataSizeComparer* create() {
            return il2cpp::create_object<app::SpaceMongerWidget_UberStateGroupDataSizeComparer>(get_class());
        }
    } // namespace SpaceMongerWidget_UberStateGroupDataSizeComparer
} // namespace app::classes::types
