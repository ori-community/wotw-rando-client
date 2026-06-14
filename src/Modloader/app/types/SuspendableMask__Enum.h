#pragma once
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/SuspendableMask__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SuspendableMask__Enum {
        inline app::SuspendableMask__Enum__Class** type_info() {
            static app::SuspendableMask__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SuspendableMask__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SuspendableMask__Enum__Class* get_class() {
            return il2cpp::get_class<app::SuspendableMask__Enum__Class>(type_info(), "Moon", "SuspendableMask");
        }
        inline app::SuspendableMask__Enum* create() {
            return il2cpp::create_object<app::SuspendableMask__Enum>(get_class());
        }
    } // namespace SuspendableMask__Enum
} // namespace app::classes::types
