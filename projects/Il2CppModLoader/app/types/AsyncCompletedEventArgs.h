#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AsyncCompletedEventArgs {
        inline app::AsyncCompletedEventArgs__Class** type_info = (app::AsyncCompletedEventArgs__Class**)(modloader::win::memory::resolve_rva(0x04729C90));
        inline app::AsyncCompletedEventArgs__Class* get_class() {
            return il2cpp::get_class<app::AsyncCompletedEventArgs__Class>(type_info, "System.ComponentModel", "AsyncCompletedEventArgs");
        }
        inline app::AsyncCompletedEventArgs* create() {
            return il2cpp::create_object<app::AsyncCompletedEventArgs>(get_class());
        }
    } // namespace AsyncCompletedEventArgs
} // namespace app::classes::types
