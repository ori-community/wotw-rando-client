#pragma once
#include <Modloader/app/structs/DateTimeKind__Enum.h>
#include <Modloader/app/structs/DateTimeKind__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DateTimeKind__Enum {
        inline app::DateTimeKind__Enum__Class** type_info() {
            static app::DateTimeKind__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DateTimeKind__Enum__Class**)(modloader::win::memory::resolve_rva(0x0473E9A8));
            }
            return cache;
        }
        inline app::DateTimeKind__Enum__Class* get_class() {
            return il2cpp::get_class<app::DateTimeKind__Enum__Class>(type_info(), "System", "DateTimeKind");
        }
        inline app::DateTimeKind__Enum* create() {
            return il2cpp::create_object<app::DateTimeKind__Enum>(get_class());
        }
    } // namespace DateTimeKind__Enum
} // namespace app::classes::types
