#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/InvalidEnumArgumentException__Class.h>
#include <Modloader/app/structs/InvalidEnumArgumentException.h>

namespace app::classes::types {
    namespace InvalidEnumArgumentException {
        inline app::InvalidEnumArgumentException__Class** type_info = (app::InvalidEnumArgumentException__Class**)(modloader::win::memory::resolve_rva(0x047345C0));
        inline app::InvalidEnumArgumentException__Class* get_class() {
            return il2cpp::get_class<app::InvalidEnumArgumentException__Class>(type_info, "System.ComponentModel", "InvalidEnumArgumentException");
        }
        inline app::InvalidEnumArgumentException* create() {
            return il2cpp::create_object<app::InvalidEnumArgumentException>(get_class());
        }
    } // namespace InvalidEnumArgumentException
} // namespace app::classes::types
