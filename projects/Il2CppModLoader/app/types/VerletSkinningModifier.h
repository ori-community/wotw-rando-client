#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VerletSkinningModifier {
        extern IL2CPP_MODLOADER_DLLEXPORT app::VerletSkinningModifier__Class** type_info;
        inline app::VerletSkinningModifier__Class* get_class() {
            return il2cpp::get_class<app::VerletSkinningModifier__Class>(type_info, "", "VerletSkinningModifier");
        }
        inline app::VerletSkinningModifier* create() {
            return il2cpp::create_object<app::VerletSkinningModifier>(get_class());
        }
    } // namespace VerletSkinningModifier
} // namespace app::classes::types
