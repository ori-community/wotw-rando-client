#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LoadingClassInitialization {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LoadingClassInitialization__Class** type_info;
        inline app::LoadingClassInitialization__Class* get_class() {
            return il2cpp::get_class<app::LoadingClassInitialization__Class>(type_info, "Moon.loading", "LoadingClassInitialization");
        }
        inline app::LoadingClassInitialization* create() {
            return il2cpp::create_object<app::LoadingClassInitialization>(get_class());
        }
    } // namespace LoadingClassInitialization
} // namespace app::classes::types
