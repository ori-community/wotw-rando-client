#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace InvalidProgramException {
        inline app::InvalidProgramException__Class** type_info = (app::InvalidProgramException__Class**)(modloader::win::memory::resolve_rva(0x04787088));
        inline app::InvalidProgramException__Class* get_class() {
            return il2cpp::get_class<app::InvalidProgramException__Class>(type_info, "System", "InvalidProgramException");
        }
        inline app::InvalidProgramException* create() {
            return il2cpp::create_object<app::InvalidProgramException>(get_class());
        }
    } // namespace InvalidProgramException
} // namespace app::classes::types
