#pragma once
#include <Modloader/app/structs/InvalidOperationException.h>
#include <Modloader/app/structs/InvalidOperationException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InvalidOperationException {
        inline app::InvalidOperationException__Class** type_info() {
            static app::InvalidOperationException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InvalidOperationException__Class**)(modloader::win::memory::resolve_rva(0x04707278));
            }
            return cache;
        }
        inline app::InvalidOperationException__Class* get_class() {
            return il2cpp::get_class<app::InvalidOperationException__Class>(type_info(), "System", "InvalidOperationException");
        }
        inline app::InvalidOperationException* create() {
            return il2cpp::create_object<app::InvalidOperationException>(get_class());
        }
    } // namespace InvalidOperationException
} // namespace app::classes::types
