#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ThreadAbortException {
        inline app::ThreadAbortException__Class** type_info = (app::ThreadAbortException__Class**)(modloader::win::memory::resolve_rva(0x0473D0D0));
        inline app::ThreadAbortException__Class* get_class() {
            return il2cpp::get_class<app::ThreadAbortException__Class>(type_info, "System.Threading", "ThreadAbortException");
        }
        inline app::ThreadAbortException* create() {
            return il2cpp::create_object<app::ThreadAbortException>(get_class());
        }
    } // namespace ThreadAbortException
} // namespace app::classes::types
