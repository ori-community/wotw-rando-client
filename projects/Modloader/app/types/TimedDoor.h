#pragma once
#include <Modloader/app/structs/TimedDoor.h>
#include <Modloader/app/structs/TimedDoor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimedDoor {
        inline app::TimedDoor__Class** type_info() {
            static app::TimedDoor__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TimedDoor__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TimedDoor__Class* get_class() {
            return il2cpp::get_class<app::TimedDoor__Class>(type_info(), "", "TimedDoor");
        }
        inline app::TimedDoor* create() {
            return il2cpp::create_object<app::TimedDoor>(get_class());
        }
    } // namespace TimedDoor
} // namespace app::classes::types
