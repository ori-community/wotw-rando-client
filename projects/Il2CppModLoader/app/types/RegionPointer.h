#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RegionPointer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RegionPointer__Class** type_info;
        inline app::RegionPointer__Class* get_class() {
            return il2cpp::get_class<app::RegionPointer__Class>(type_info, "TriangleNet.Geometry", "RegionPointer");
        }
        inline app::RegionPointer* create() {
            return il2cpp::create_object<app::RegionPointer>(get_class());
        }
        inline app::RegionPointer__Array* create_array(int size) {
            return il2cpp::array_new<app::RegionPointer__Array>(get_class(), size);
        }
    } // namespace RegionPointer
} // namespace app::classes::types
