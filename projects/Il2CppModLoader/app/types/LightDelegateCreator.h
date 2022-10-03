#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LightDelegateCreator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LightDelegateCreator__Class** type_info;
        inline app::LightDelegateCreator__Class* get_class() {
            return il2cpp::get_class<app::LightDelegateCreator__Class>(type_info, "System.Linq.Expressions.Interpreter", "LightDelegateCreator");
        }
        inline app::LightDelegateCreator* create() {
            return il2cpp::create_object<app::LightDelegateCreator>(get_class());
        }
    } // namespace LightDelegateCreator
} // namespace app::classes::types
