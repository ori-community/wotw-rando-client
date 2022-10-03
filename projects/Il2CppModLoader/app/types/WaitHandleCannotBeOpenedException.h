#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WaitHandleCannotBeOpenedException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WaitHandleCannotBeOpenedException__Class** type_info;
        inline app::WaitHandleCannotBeOpenedException__Class* get_class() {
            return il2cpp::get_class<app::WaitHandleCannotBeOpenedException__Class>(type_info, "System.Threading", "WaitHandleCannotBeOpenedException");
        }
        inline app::WaitHandleCannotBeOpenedException* create() {
            return il2cpp::create_object<app::WaitHandleCannotBeOpenedException>(get_class());
        }
    } // namespace WaitHandleCannotBeOpenedException
} // namespace app::classes::types
