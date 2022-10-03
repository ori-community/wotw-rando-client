#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SurfaceMaterialPrefabPair__Array {
        namespace {
            app::SurfaceMaterialPrefabPair__Array__Class* type_info_ref = nullptr;
        }
        app::SurfaceMaterialPrefabPair__Array__Class** type_info = &type_info_ref;
        inline app::SurfaceMaterialPrefabPair__Array__Class* get_class() {
            return il2cpp::get_class<app::SurfaceMaterialPrefabPair__Array__Class>(type_info, "", "SurfaceMaterialPrefabPair[]");
        }
        inline app::SurfaceMaterialPrefabPair__Array* create() {
            return il2cpp::create_object<app::SurfaceMaterialPrefabPair__Array>(get_class());
        }
    } // namespace SurfaceMaterialPrefabPair__Array
} // namespace app::classes::types
