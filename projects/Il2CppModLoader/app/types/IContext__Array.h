#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IContext__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IContext__Array__Class** type_info;
        inline app::IContext__Array__Class* get_class() {
            return il2cpp::get_class<app::IContext__Array__Class>(type_info, "", "IContext[]");
        }
        inline app::IContext__Array* create() {
            return il2cpp::create_object<app::IContext__Array>(get_class());
        }
    } // namespace IContext__Array
} // namespace app::classes::types
