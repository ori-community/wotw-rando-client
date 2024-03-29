#pragma once
#include <Modloader/app/structs/SecurityException.h>
#include <Modloader/app/structs/SecurityException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SecurityException {
        inline app::SecurityException__Class** type_info() {
            static app::SecurityException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SecurityException__Class**)(modloader::win::memory::resolve_rva(0x0477B4B0));
            }
            return cache;
        }
        inline app::SecurityException__Class* get_class() {
            return il2cpp::get_class<app::SecurityException__Class>(type_info(), "System.Security", "SecurityException");
        }
        inline app::SecurityException* create() {
            return il2cpp::create_object<app::SecurityException>(get_class());
        }
    } // namespace SecurityException
} // namespace app::classes::types
