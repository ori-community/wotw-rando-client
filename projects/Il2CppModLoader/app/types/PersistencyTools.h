#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PersistencyTools {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PersistencyTools__Class** type_info;
        inline app::PersistencyTools__Class* get_class() {
            return il2cpp::get_class<app::PersistencyTools__Class>(type_info, "Moon.EditorTools.Persistency", "PersistencyTools");
        }
        inline app::PersistencyTools* create() {
            return il2cpp::create_object<app::PersistencyTools>(get_class());
        }
    } // namespace PersistencyTools
} // namespace app::classes::types
