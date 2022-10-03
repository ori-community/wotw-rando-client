#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DrivableGroup {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DrivableGroup__Class** type_info;
        inline app::DrivableGroup__Class* get_class() {
            return il2cpp::get_class<app::DrivableGroup__Class>(type_info, "Moon", "DrivableGroup");
        }
        inline app::DrivableGroup* create() {
            return il2cpp::create_object<app::DrivableGroup>(get_class());
        }
    } // namespace DrivableGroup
} // namespace app::classes::types
