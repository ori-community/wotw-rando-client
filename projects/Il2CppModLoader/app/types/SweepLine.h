#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SweepLine {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SweepLine__Class** type_info;
        inline app::SweepLine__Class* get_class() {
            return il2cpp::get_class<app::SweepLine__Class>(type_info, "TriangleNet.Meshing.Algorithm", "SweepLine");
        }
        inline app::SweepLine* create() {
            return il2cpp::create_object<app::SweepLine>(get_class());
        }
    } // namespace SweepLine
} // namespace app::classes::types
