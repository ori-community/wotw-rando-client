#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AsyncHelper {
        inline app::AsyncHelper__Class** type_info = (app::AsyncHelper__Class**)(modloader::win::memory::resolve_rva(0x047164B8));
        inline app::AsyncHelper__Class* get_class() {
            return il2cpp::get_class<app::AsyncHelper__Class>(type_info, "System.Xml", "AsyncHelper");
        }
        inline app::AsyncHelper* create() {
            return il2cpp::create_object<app::AsyncHelper>(get_class());
        }
    } // namespace AsyncHelper
} // namespace app::classes::types
