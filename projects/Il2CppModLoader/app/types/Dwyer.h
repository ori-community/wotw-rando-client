#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Dwyer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Dwyer__Class** type_info;
        inline app::Dwyer__Class* get_class() {
            return il2cpp::get_class<app::Dwyer__Class>(type_info, "TriangleNet.Meshing.Algorithm", "Dwyer");
        }
        inline app::Dwyer* create() {
            return il2cpp::create_object<app::Dwyer>(get_class());
        }
    } // namespace Dwyer
} // namespace app::classes::types
