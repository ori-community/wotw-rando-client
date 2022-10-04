#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IServiceProvider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IServiceProvider__Class** type_info;
        inline app::IServiceProvider__Class* get_class() {
            return il2cpp::get_class<app::IServiceProvider__Class>(type_info, "System", "IServiceProvider");
        }
        inline app::IServiceProvider* create() {
            return il2cpp::create_object<app::IServiceProvider>(get_class());
        }
    } // namespace IServiceProvider
} // namespace app::classes::types
