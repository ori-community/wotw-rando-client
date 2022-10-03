#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GUIContext {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GUIContext__Class** type_info;
        inline app::GUIContext__Class* get_class() {
            return il2cpp::get_class<app::GUIContext__Class>(type_info, "Sini.Unity", "GUIContext");
        }
        inline app::GUIContext* create() {
            return il2cpp::create_object<app::GUIContext>(get_class());
        }
    } // namespace GUIContext
} // namespace app::classes::types
