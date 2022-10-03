#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RegisteredWaitHandle {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RegisteredWaitHandle__Class** type_info;
        inline app::RegisteredWaitHandle__Class* get_class() {
            return il2cpp::get_class<app::RegisteredWaitHandle__Class>(type_info, "System.Threading", "RegisteredWaitHandle");
        }
        inline app::RegisteredWaitHandle* create() {
            return il2cpp::create_object<app::RegisteredWaitHandle>(get_class());
        }
    } // namespace RegisteredWaitHandle
} // namespace app::classes::types
