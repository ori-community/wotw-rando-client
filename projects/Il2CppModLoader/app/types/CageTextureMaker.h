#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CageTextureMaker {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CageTextureMaker__Class** type_info;
        inline app::CageTextureMaker__Class* get_class() {
            return il2cpp::get_class<app::CageTextureMaker__Class>(type_info, "Moon", "CageTextureMaker");
        }
        inline app::CageTextureMaker* create() {
            return il2cpp::create_object<app::CageTextureMaker>(get_class());
        }
    } // namespace CageTextureMaker
} // namespace app::classes::types
