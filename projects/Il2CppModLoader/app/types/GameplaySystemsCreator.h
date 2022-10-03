#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GameplaySystemsCreator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GameplaySystemsCreator__Class** type_info;
        inline app::GameplaySystemsCreator__Class* get_class() {
            return il2cpp::get_class<app::GameplaySystemsCreator__Class>(type_info, "", "GameplaySystemsCreator");
        }
        inline app::GameplaySystemsCreator* create() {
            return il2cpp::create_object<app::GameplaySystemsCreator>(get_class());
        }
    } // namespace GameplaySystemsCreator
} // namespace app::classes::types
