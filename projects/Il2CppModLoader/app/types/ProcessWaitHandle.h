#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ProcessWaitHandle {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ProcessWaitHandle__Class** type_info;
        inline app::ProcessWaitHandle__Class* get_class() {
            return il2cpp::get_class<app::ProcessWaitHandle__Class>(type_info, "System.Diagnostics", "ProcessWaitHandle");
        }
        inline app::ProcessWaitHandle* create() {
            return il2cpp::create_object<app::ProcessWaitHandle>(get_class());
        }
    } // namespace ProcessWaitHandle
} // namespace app::classes::types
