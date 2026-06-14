#pragma once
#include <Modloader/app/structs/InvalidCastException.h>
#include <Modloader/app/structs/InvalidCastException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InvalidCastException {
        inline app::InvalidCastException__Class** type_info() {
            static app::InvalidCastException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InvalidCastException__Class**)(modloader::win::memory::resolve_rva(0x0478C848));
            }
            return cache;
        }
        inline app::InvalidCastException__Class* get_class() {
            return il2cpp::get_class<app::InvalidCastException__Class>(type_info(), "System", "InvalidCastException");
        }
        inline app::InvalidCastException* create() {
            return il2cpp::create_object<app::InvalidCastException>(get_class());
        }
    } // namespace InvalidCastException
} // namespace app::classes::types
