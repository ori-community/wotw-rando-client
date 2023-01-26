#pragma once
#include <Modloader/app/structs/MethodAccessException.h>
#include <Modloader/app/structs/MethodAccessException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MethodAccessException {
        inline app::MethodAccessException__Class** type_info() {
            static app::MethodAccessException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MethodAccessException__Class**)(modloader::win::memory::resolve_rva(0x04796358));
            }
            return cache;
        }
        inline app::MethodAccessException__Class* get_class() {
            return il2cpp::get_class<app::MethodAccessException__Class>(type_info(), "System", "MethodAccessException");
        }
        inline app::MethodAccessException* create() {
            return il2cpp::create_object<app::MethodAccessException>(get_class());
        }
    } // namespace MethodAccessException
} // namespace app::classes::types
