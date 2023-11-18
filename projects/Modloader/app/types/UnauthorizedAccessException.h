#pragma once
#include <Modloader/app/structs/UnauthorizedAccessException.h>
#include <Modloader/app/structs/UnauthorizedAccessException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnauthorizedAccessException {
        inline app::UnauthorizedAccessException__Class** type_info() {
            static app::UnauthorizedAccessException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UnauthorizedAccessException__Class**)(modloader::win::memory::resolve_rva(0x04733DE8));
            }
            return cache;
        }
        inline app::UnauthorizedAccessException__Class* get_class() {
            return il2cpp::get_class<app::UnauthorizedAccessException__Class>(type_info(), "System", "UnauthorizedAccessException");
        }
        inline app::UnauthorizedAccessException* create() {
            return il2cpp::create_object<app::UnauthorizedAccessException>(get_class());
        }
    } // namespace UnauthorizedAccessException
} // namespace app::classes::types
