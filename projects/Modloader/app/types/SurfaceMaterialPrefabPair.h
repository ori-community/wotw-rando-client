#pragma once
#include <Modloader/app/structs/SurfaceMaterialPrefabPair.h>
#include <Modloader/app/structs/SurfaceMaterialPrefabPair__Array.h>
#include <Modloader/app/structs/SurfaceMaterialPrefabPair__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SurfaceMaterialPrefabPair {
        inline app::SurfaceMaterialPrefabPair__Class** type_info() {
            static app::SurfaceMaterialPrefabPair__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SurfaceMaterialPrefabPair__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SurfaceMaterialPrefabPair__Class* get_class() {
            return il2cpp::get_class<app::SurfaceMaterialPrefabPair__Class>(type_info(), "", "SurfaceMaterialPrefabPair");
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
