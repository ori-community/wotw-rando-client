#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MetaballDefs {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MetaballDefs__Class** type_info;
        inline app::MetaballDefs__Class* get_class() {
            return il2cpp::get_class<app::MetaballDefs__Class>(type_info, "Metaballs2D", "MetaballDefs");
        }
        inline app::MetaballDefs* create() {
            return il2cpp::create_object<app::MetaballDefs>(get_class());
        }
    } // namespace MetaballDefs
} // namespace app::classes::types
