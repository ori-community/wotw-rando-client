#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ListChangedEventArgs {
        inline app::ListChangedEventArgs__Class** type_info = (app::ListChangedEventArgs__Class**)(modloader::win::memory::resolve_rva(0x04705330));
        inline app::ListChangedEventArgs__Class* get_class() {
            return il2cpp::get_class<app::ListChangedEventArgs__Class>(type_info, "System.ComponentModel", "ListChangedEventArgs");
        }
        inline app::ListChangedEventArgs* create() {
            return il2cpp::create_object<app::ListChangedEventArgs>(get_class());
        }
    } // namespace ListChangedEventArgs
} // namespace app::classes::types
