#pragma once
#include <Modloader/app/structs/DateTimeOffset__Array.h>
#include <Modloader/app/structs/DateTimeOffset__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DateTimeOffset__Array {
        inline app::DateTimeOffset__Array__Class** type_info() {
            static app::DateTimeOffset__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DateTimeOffset__Array__Class**)(modloader::win::memory::resolve_rva(0x0475A000));
            }
            return cache;
        }
        inline app::DateTimeOffset__Array__Class* get_class() {
            return il2cpp::get_class<app::DateTimeOffset__Array__Class>(type_info(), "System", "DateTimeOffset[]");
        }
        inline app::DateTimeOffset__Array* create() {
            return il2cpp::create_object<app::DateTimeOffset__Array>(get_class());
        }
    } // namespace DateTimeOffset__Array
} // namespace app::classes::types
