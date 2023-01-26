#pragma once
#include <Modloader/app/structs/SurfaceMaterialPrefabPair__Array.h>
#include <Modloader/app/structs/SurfaceMaterialPrefabPair__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SurfaceMaterialPrefabPair__Array {
        inline app::SurfaceMaterialPrefabPair__Array__Class** type_info() {
            static app::SurfaceMaterialPrefabPair__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SurfaceMaterialPrefabPair__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SurfaceMaterialPrefabPair__Array__Class* get_class() {
            return il2cpp::get_class<app::SurfaceMaterialPrefabPair__Array__Class>(type_info(), "", "SurfaceMaterialPrefabPair[]");
        }
        inline app::SurfaceMaterialPrefabPair__Array* create() {
            return il2cpp::create_object<app::SurfaceMaterialPrefabPair__Array>(get_class());
        }
    } // namespace SurfaceMaterialPrefabPair__Array
} // namespace app::classes::types
