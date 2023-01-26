#pragma once
#include <Modloader/app/structs/TimeoutException.h>
#include <Modloader/app/structs/TimeoutException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimeoutException {
        inline app::TimeoutException__Class** type_info() {
            static app::TimeoutException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TimeoutException__Class**)(modloader::win::memory::resolve_rva(0x0479A1F0));
            }
            return cache;
        }
        inline app::TimeoutException__Class* get_class() {
            return il2cpp::get_class<app::TimeoutException__Class>(type_info(), "System", "TimeoutException");
        }
        inline app::TimeoutException* create() {
            return il2cpp::create_object<app::TimeoutException>(get_class());
        }
    } // namespace TimeoutException
} // namespace app::classes::types
