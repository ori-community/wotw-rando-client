#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AsyncCallback {
        inline app::AsyncCallback__Class** type_info = (app::AsyncCallback__Class**)(modloader::win::memory::resolve_rva(0x0470B560));
        inline app::AsyncCallback__Class* get_class() {
            return il2cpp::get_class<app::AsyncCallback__Class>(type_info, "System", "AsyncCallback");
        }
        inline app::AsyncCallback* create() {
            return il2cpp::create_object<app::AsyncCallback>(get_class());
        }
    } // namespace AsyncCallback
} // namespace app::classes::types
