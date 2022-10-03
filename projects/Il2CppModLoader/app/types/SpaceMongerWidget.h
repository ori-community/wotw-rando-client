#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpaceMongerWidget {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SpaceMongerWidget__Class** type_info;
        inline app::SpaceMongerWidget__Class* get_class() {
            return il2cpp::get_class<app::SpaceMongerWidget__Class>(type_info, "Moon.UberStateVisualization", "SpaceMongerWidget");
        }
        inline app::SpaceMongerWidget* create() {
            return il2cpp::create_object<app::SpaceMongerWidget>(get_class());
        }
    } // namespace SpaceMongerWidget
} // namespace app::classes::types
