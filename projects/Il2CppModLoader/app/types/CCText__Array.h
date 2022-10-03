#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CCText__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CCText__Array__Class** type_info;
        inline app::CCText__Array__Class* get_class() {
            return il2cpp::get_class<app::CCText__Array__Class>(type_info, "", "CCText[]");
        }
        inline app::CCText__Array* create() {
            return il2cpp::create_object<app::CCText__Array>(get_class());
        }
    } // namespace CCText__Array
} // namespace app::classes::types
