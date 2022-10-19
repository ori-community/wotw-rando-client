#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ListArgumentProvider {
        inline app::ListArgumentProvider__Class** type_info = (app::ListArgumentProvider__Class**)(modloader::win::memory::resolve_rva(0x04702408));
        inline app::ListArgumentProvider__Class* get_class() {
            return il2cpp::get_class<app::ListArgumentProvider__Class>(type_info, "System.Dynamic.Utils", "ListArgumentProvider");
        }
        inline app::ListArgumentProvider* create() {
            return il2cpp::create_object<app::ListArgumentProvider>(get_class());
        }
    } // namespace ListArgumentProvider
} // namespace app::classes::types
