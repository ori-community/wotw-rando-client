#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ThreadHelper {
        inline app::ThreadHelper__Class** type_info = (app::ThreadHelper__Class**)(modloader::win::memory::resolve_rva(0x04777D28));
        inline app::ThreadHelper__Class* get_class() {
            return il2cpp::get_class<app::ThreadHelper__Class>(type_info, "System.Threading", "ThreadHelper");
        }
        inline app::ThreadHelper* create() {
            return il2cpp::create_object<app::ThreadHelper>(get_class());
        }
    } // namespace ThreadHelper
} // namespace app::classes::types
