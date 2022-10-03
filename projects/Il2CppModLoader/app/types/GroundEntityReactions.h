#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GroundEntityReactions {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GroundEntityReactions__Class** type_info;
        inline app::GroundEntityReactions__Class* get_class() {
            return il2cpp::get_class<app::GroundEntityReactions__Class>(type_info, "", "GroundEntityReactions");
        }
        inline app::GroundEntityReactions* create() {
            return il2cpp::create_object<app::GroundEntityReactions>(get_class());
        }
    } // namespace GroundEntityReactions
} // namespace app::classes::types
