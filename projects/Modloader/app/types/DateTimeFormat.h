#pragma once
#include <Modloader/app/structs/DateTimeFormat.h>
#include <Modloader/app/structs/DateTimeFormat__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DateTimeFormat {
        inline app::DateTimeFormat__Class** type_info() {
            static app::DateTimeFormat__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DateTimeFormat__Class**)(modloader::win::memory::resolve_rva(0x047110A8));
            }
            return cache;
        }
        inline app::DateTimeFormat__Class* get_class() {
            return il2cpp::get_class<app::DateTimeFormat__Class>(type_info(), "System", "DateTimeFormat");
        }
        inline app::DateTimeFormat* create() {
            return il2cpp::create_object<app::DateTimeFormat>(get_class());
        }
    } // namespace DateTimeFormat
} // namespace app::classes::types
