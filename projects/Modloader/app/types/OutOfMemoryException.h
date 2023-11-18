#pragma once
#include <Modloader/app/structs/OutOfMemoryException.h>
#include <Modloader/app/structs/OutOfMemoryException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OutOfMemoryException {
        inline app::OutOfMemoryException__Class** type_info() {
            static app::OutOfMemoryException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::OutOfMemoryException__Class**)(modloader::win::memory::resolve_rva(0x0470EB60));
            }
            return cache;
        }
        inline app::OutOfMemoryException__Class* get_class() {
            return il2cpp::get_class<app::OutOfMemoryException__Class>(type_info(), "System", "OutOfMemoryException");
        }
        inline app::OutOfMemoryException* create() {
            return il2cpp::create_object<app::OutOfMemoryException>(get_class());
        }
    } // namespace OutOfMemoryException
} // namespace app::classes::types
