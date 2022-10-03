#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WaitHandle__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WaitHandle__Array__Class** type_info;
        inline app::WaitHandle__Array__Class* get_class() {
            return il2cpp::get_class<app::WaitHandle__Array__Class>(type_info, "System.Threading", "WaitHandle[]");
        }
        inline app::WaitHandle__Array* create() {
            return il2cpp::create_object<app::WaitHandle__Array>(get_class());
        }
    } // namespace WaitHandle__Array
} // namespace app::classes::types
