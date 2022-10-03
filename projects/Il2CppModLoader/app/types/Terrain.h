#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Terrain {
        namespace {
            app::Terrain__Class* type_info_ref = nullptr;
        }
        app::Terrain__Class** type_info = &type_info_ref;
        inline app::Terrain__Class* get_class() {
            return il2cpp::get_class<app::Terrain__Class>(type_info, "Moon", "Terrain");
        }
        inline app::Terrain* create() {
            return il2cpp::create_object<app::Terrain>(get_class());
        }
    } // namespace Terrain
} // namespace app::classes::types
