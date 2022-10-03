#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ThreadHelper {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ThreadHelper__Class** type_info;
        inline app::ThreadHelper__Class* get_class() {
            return il2cpp::get_class<app::ThreadHelper__Class>(type_info, "System.Threading", "ThreadHelper");
        }
        inline app::ThreadHelper* create() {
            return il2cpp::create_object<app::ThreadHelper>(get_class());
        }
    } // namespace ThreadHelper
} // namespace app::classes::types
