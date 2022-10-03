#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Tests_SetupPosition_d_16 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Tests_SetupPosition_d_16__Class** type_info;
        inline app::Tests_SetupPosition_d_16__Class* get_class() {
            return il2cpp::get_nested_class<app::Tests_SetupPosition_d_16__Class>(type_info, "HierarchyPerfTest", "Tests", "<SetupPosition>d__16");
        }
        inline app::Tests_SetupPosition_d_16* create() {
            return il2cpp::create_object<app::Tests_SetupPosition_d_16>(get_class());
        }
    } // namespace Tests_SetupPosition_d_16
} // namespace app::classes::types
