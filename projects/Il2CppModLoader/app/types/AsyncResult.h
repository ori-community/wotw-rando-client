#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AsyncResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AsyncResult__Class** type_info;
        inline app::AsyncResult__Class* get_class() {
            return il2cpp::get_class<app::AsyncResult__Class>(type_info, "System.Runtime.Remoting.Messaging", "AsyncResult");
        }
        inline app::AsyncResult* create() {
            return il2cpp::create_object<app::AsyncResult>(get_class());
        }
    } // namespace AsyncResult
} // namespace app::classes::types
