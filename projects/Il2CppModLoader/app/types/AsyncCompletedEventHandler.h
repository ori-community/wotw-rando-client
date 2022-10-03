#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AsyncCompletedEventHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AsyncCompletedEventHandler__Class** type_info;
        inline app::AsyncCompletedEventHandler__Class* get_class() {
            return il2cpp::get_class<app::AsyncCompletedEventHandler__Class>(type_info, "System.ComponentModel", "AsyncCompletedEventHandler");
        }
        inline app::AsyncCompletedEventHandler* create() {
            return il2cpp::create_object<app::AsyncCompletedEventHandler>(get_class());
        }
    } // namespace AsyncCompletedEventHandler
} // namespace app::classes::types
