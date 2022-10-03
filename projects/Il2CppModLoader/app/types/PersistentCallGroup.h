#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PersistentCallGroup {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PersistentCallGroup__Class** type_info;
        inline app::PersistentCallGroup__Class* get_class() {
            return il2cpp::get_class<app::PersistentCallGroup__Class>(type_info, "UnityEngine.Events", "PersistentCallGroup");
        }
        inline app::PersistentCallGroup* create() {
            return il2cpp::create_object<app::PersistentCallGroup>(get_class());
        }
    } // namespace PersistentCallGroup
} // namespace app::classes::types
