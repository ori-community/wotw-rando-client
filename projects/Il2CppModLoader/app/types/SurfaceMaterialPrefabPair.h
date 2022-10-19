#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SurfaceMaterialPrefabPair {
        namespace {
            inline app::SurfaceMaterialPrefabPair__Class* type_info_ref = nullptr;
        }
        inline app::SurfaceMaterialPrefabPair__Class** type_info = &type_info_ref;
        inline app::SurfaceMaterialPrefabPair__Class* get_class() {
            return il2cpp::get_class<app::SurfaceMaterialPrefabPair__Class>(type_info, "", "SurfaceMaterialPrefabPair");
        }
        inline app::SurfaceMaterialPrefabPair* create() {
            return il2cpp::create_object<app::SurfaceMaterialPrefabPair>(get_class());
        }
        inline app::SurfaceMaterialPrefabPair__Array* create_array(int size) {
            return il2cpp::array_new<app::SurfaceMaterialPrefabPair__Array>(get_class(), size);
        }
        inline app::SurfaceMaterialPrefabPair__Array* create_array(const std::vector<app::SurfaceMaterialPrefabPair*>& items) {
            return il2cpp::array_new<app::SurfaceMaterialPrefabPair__Array>(get_class(), items);
        }
    } // namespace SurfaceMaterialPrefabPair
} // namespace app::classes::types
