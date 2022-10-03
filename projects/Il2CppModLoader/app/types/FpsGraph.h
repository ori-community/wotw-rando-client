#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FpsGraph {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FpsGraph__Class** type_info;
        inline app::FpsGraph__Class* get_class() {
            return il2cpp::get_class<app::FpsGraph__Class>(type_info, "", "FpsGraph");
        }
        inline app::FpsGraph* create() {
            return il2cpp::create_object<app::FpsGraph>(get_class());
        }
    } // namespace FpsGraph
} // namespace app::classes::types
