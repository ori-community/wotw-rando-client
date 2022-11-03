#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimeoutException {
        inline app::TimeoutException__Class** type_info = (app::TimeoutException__Class**)(modloader::win::memory::resolve_rva(0x0479A1F0));
        inline app::TimeoutException__Class* get_class() {
            return il2cpp::get_class<app::TimeoutException__Class>(type_info, "System", "TimeoutException");
        }
        inline app::TimeoutException* create() {
            return il2cpp::create_object<app::TimeoutException>(get_class());
        }
    } // namespace TimeoutException
} // namespace app::classes::types
