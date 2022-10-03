#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Face__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Face__Array__Class** type_info;
        inline app::Face__Array__Class* get_class() {
            return il2cpp::get_class<app::Face__Array__Class>(type_info, "TriangleNet.Topology.DCEL", "Face[]");
        }
        inline app::Face__Array* create() {
            return il2cpp::create_object<app::Face__Array>(get_class());
        }
    } // namespace Face__Array
} // namespace app::classes::types
