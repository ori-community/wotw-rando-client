#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MonoManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MonoManager__Class** type_info;
        inline app::MonoManager__Class* get_class() {
            return il2cpp::get_class<app::MonoManager__Class>(type_info, "ParadoxNotion.Services", "MonoManager");
        }
        inline app::MonoManager* create() {
            return il2cpp::create_object<app::MonoManager>(get_class());
        }
    } // namespace MonoManager
} // namespace app::classes::types
