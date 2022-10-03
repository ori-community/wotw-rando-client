#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ActionDisposable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ActionDisposable__Class** type_info;
        inline app::ActionDisposable__Class* get_class() {
            return il2cpp::get_class<app::ActionDisposable__Class>(type_info, "", "ActionDisposable");
        }
        inline app::ActionDisposable* create() {
            return il2cpp::create_object<app::ActionDisposable>(get_class());
        }
    } // namespace ActionDisposable
} // namespace app::classes::types
