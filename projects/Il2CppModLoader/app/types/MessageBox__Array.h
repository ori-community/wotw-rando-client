#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MessageBox__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MessageBox__Array__Class** type_info;
        inline app::MessageBox__Array__Class* get_class() {
            return il2cpp::get_class<app::MessageBox__Array__Class>(type_info, "", "MessageBox[]");
        }
        inline app::MessageBox__Array* create() {
            return il2cpp::create_object<app::MessageBox__Array>(get_class());
        }
    } // namespace MessageBox__Array
} // namespace app::classes::types
