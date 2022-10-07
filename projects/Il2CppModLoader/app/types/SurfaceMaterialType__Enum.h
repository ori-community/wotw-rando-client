#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SurfaceMaterialType__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SurfaceMaterialType__Enum__Class** type_info;
        inline app::SurfaceMaterialType__Enum__Class* get_class() {
            return il2cpp::get_class<app::SurfaceMaterialType__Enum__Class>(type_info, "", "SurfaceMaterialType");
        }
        inline app::SurfaceMaterialType__Enum* create() {
            return il2cpp::create_object<app::SurfaceMaterialType__Enum>(get_class());
        }
        inline app::SurfaceMaterialType__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::SurfaceMaterialType__Enum__Array>(get_class(), size);
        }
        inline app::SurfaceMaterialType__Enum__Array* create_array(const std::vector<app::SurfaceMaterialType__Enum*>& items) {
            return il2cpp::array_new<app::SurfaceMaterialType__Enum__Array>(get_class(), items);
        }
    } // namespace SurfaceMaterialType__Enum
} // namespace app::classes::types
