#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ThreadStateException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ThreadStateException__Class** type_info;
        inline app::ThreadStateException__Class* get_class() {
            return il2cpp::get_class<app::ThreadStateException__Class>(type_info, "System.Threading", "ThreadStateException");
        }
        inline app::ThreadStateException* create() {
            return il2cpp::create_object<app::ThreadStateException>(get_class());
        }
    } // namespace ThreadStateException
} // namespace app::classes::types
