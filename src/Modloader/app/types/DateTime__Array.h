#pragma once
#include <Modloader/app/structs/DateTime__Array.h>
#include <Modloader/app/structs/DateTime__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DateTime__Array {
        inline app::DateTime__Array__Class** type_info() {
            static app::DateTime__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DateTime__Array__Class**)(modloader::win::memory::resolve_rva(0x04713380));
            }
            return cache;
        }
        inline app::DateTime__Array__Class* get_class() {
            return il2cpp::get_class<app::DateTime__Array__Class>(type_info(), "System", "DateTime[]");
        }
        inline app::DateTime__Array* create() {
            return il2cpp::create_object<app::DateTime__Array>(get_class());
        }
    } // namespace DateTime__Array
} // namespace app::classes::types
