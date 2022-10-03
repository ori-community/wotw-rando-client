#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Face {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Face__Class** type_info;
        inline app::Face__Class* get_class() {
            return il2cpp::get_class<app::Face__Class>(type_info, "TriangleNet.Topology.DCEL", "Face");
        }
        inline app::Face* create() {
            return il2cpp::create_object<app::Face>(get_class());
        }
        inline app::Face__Array* create_array(int size) {
            return il2cpp::array_new<app::Face__Array>(get_class(), size);
        }
    } // namespace Face
} // namespace app::classes::types
