#pragma once
#include <Modloader/app/structs/InternalException.h>
#include <Modloader/app/structs/InternalException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InternalException {
        inline app::InternalException__Class** type_info() {
            static app::InternalException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InternalException__Class**)(modloader::win::memory::resolve_rva(0x04785F00));
            }
            return cache;
        }
        inline app::InternalException__Class* get_class() {
            return il2cpp::get_class<app::InternalException__Class>(type_info(), "System.Net", "InternalException");
        }
        inline app::InternalException* create() {
            return il2cpp::create_object<app::InternalException>(get_class());
        }
    } // namespace InternalException
} // namespace app::classes::types
