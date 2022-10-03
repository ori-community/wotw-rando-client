#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PersistencyTools_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PersistencyTools_c__Class** type_info;
        inline app::PersistencyTools_c__Class* get_class() {
            return il2cpp::get_nested_class<app::PersistencyTools_c__Class>(type_info, "Moon.EditorTools.Persistency", "PersistencyTools", "<>c");
        }
        inline app::PersistencyTools_c* create() {
            return il2cpp::create_object<app::PersistencyTools_c>(get_class());
        }
    } // namespace PersistencyTools_c
} // namespace app::classes::types
