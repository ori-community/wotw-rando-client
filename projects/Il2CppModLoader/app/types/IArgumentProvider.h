#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IArgumentProvider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IArgumentProvider__Class** type_info;
        inline app::IArgumentProvider__Class* get_class() {
            return il2cpp::get_class<app::IArgumentProvider__Class>(type_info, "System.Linq.Expressions", "IArgumentProvider");
        }
        inline app::IArgumentProvider* create() {
            return il2cpp::create_object<app::IArgumentProvider>(get_class());
        }
    } // namespace IArgumentProvider
} // namespace app::classes::types
