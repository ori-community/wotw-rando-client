#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ThreadAbortException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ThreadAbortException__Class** type_info;
        inline app::ThreadAbortException__Class* get_class() {
            return il2cpp::get_class<app::ThreadAbortException__Class>(type_info, "System.Threading", "ThreadAbortException");
        }
        inline app::ThreadAbortException* create() {
            return il2cpp::create_object<app::ThreadAbortException>(get_class());
        }
    } // namespace ThreadAbortException
} // namespace app::classes::types
