#pragma once
#include <Modloader/app/structs/MapmakerItem__Array.h>
#include <Modloader/app/structs/MapmakerItem__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MapmakerItem__Array {
        inline app::MapmakerItem__Array__Class** type_info() {
            static app::MapmakerItem__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MapmakerItem__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MapmakerItem__Array__Class* get_class() {
            return il2cpp::get_class<app::MapmakerItem__Array__Class>(type_info(), "", "MapmakerItem[]");
        }
        inline app::MapmakerItem__Array* create() {
            return il2cpp::create_object<app::MapmakerItem__Array>(get_class());
        }
    } // namespace MapmakerItem__Array
} // namespace app::classes::types
