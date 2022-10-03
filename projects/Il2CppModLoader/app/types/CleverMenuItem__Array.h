#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CleverMenuItem__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CleverMenuItem__Array__Class** type_info;
        inline app::CleverMenuItem__Array__Class* get_class() {
            return il2cpp::get_class<app::CleverMenuItem__Array__Class>(type_info, "", "CleverMenuItem[]");
        }
        inline app::CleverMenuItem__Array* create() {
            return il2cpp::create_object<app::CleverMenuItem__Array>(get_class());
        }
    } // namespace CleverMenuItem__Array
} // namespace app::classes::types
