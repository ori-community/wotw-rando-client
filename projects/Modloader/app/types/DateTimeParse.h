#pragma once
#include <Modloader/app/structs/DateTimeParse.h>
#include <Modloader/app/structs/DateTimeParse__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DateTimeParse {
        inline app::DateTimeParse__Class** type_info() {
            static app::DateTimeParse__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DateTimeParse__Class**)(modloader::win::memory::resolve_rva(0x04763740));
            }
            return cache;
        }
        inline app::DateTimeParse__Class* get_class() {
            return il2cpp::get_class<app::DateTimeParse__Class>(type_info(), "System", "DateTimeParse");
        }
        inline app::DateTimeParse* create() {
            return il2cpp::create_object<app::DateTimeParse>(get_class());
        }
    } // namespace DateTimeParse
} // namespace app::classes::types
