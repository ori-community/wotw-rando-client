#pragma once
#include <Modloader/app/structs/MoveEventType__Enum.h>
#include <Modloader/app/structs/MoveEventType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoveEventType__Enum {
        inline app::MoveEventType__Enum__Class** type_info() {
            static app::MoveEventType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoveEventType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoveEventType__Enum__Class* get_class() {
            return il2cpp::get_class<app::MoveEventType__Enum__Class>(type_info(), "Moon.Timeline", "MoveEventType");
        }
        inline app::MoveEventType__Enum* create() {
            return il2cpp::create_object<app::MoveEventType__Enum>(get_class());
        }
    } // namespace MoveEventType__Enum
} // namespace app::classes::types
