#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WaitHandle {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WaitHandle__Class** type_info;
        inline app::WaitHandle__Class* get_class() {
            return il2cpp::get_class<app::WaitHandle__Class>(type_info, "System.Threading", "WaitHandle");
        }
        inline app::WaitHandle* create() {
            return il2cpp::create_object<app::WaitHandle>(get_class());
        }
        inline app::WaitHandle__Array* create_array(int size) {
            return il2cpp::array_new<app::WaitHandle__Array>(get_class(), size);
        }
    } // namespace WaitHandle
} // namespace app::classes::types
