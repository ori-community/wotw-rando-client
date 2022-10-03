#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpaceMongerWidget_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SpaceMongerWidget_c__Class** type_info;
        inline app::SpaceMongerWidget_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SpaceMongerWidget_c__Class>(type_info, "Moon.UberStateVisualization", "SpaceMongerWidget", "<>c");
        }
        inline app::SpaceMongerWidget_c* create() {
            return il2cpp::create_object<app::SpaceMongerWidget_c>(get_class());
        }
    } // namespace SpaceMongerWidget_c
} // namespace app::classes::types
