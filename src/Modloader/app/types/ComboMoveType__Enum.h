#pragma once
#include <Modloader/app/structs/ComboMoveType__Enum.h>
#include <Modloader/app/structs/ComboMoveType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ComboMoveType__Enum {
        inline app::ComboMoveType__Enum__Class** type_info() {
            static app::ComboMoveType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ComboMoveType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ComboMoveType__Enum__Class* get_class() {
            return il2cpp::get_class<app::ComboMoveType__Enum__Class>(type_info(), "Moon.ComboSystem", "ComboMoveType");
        }
        inline app::ComboMoveType__Enum* create() {
            return il2cpp::create_object<app::ComboMoveType__Enum>(get_class());
        }
    } // namespace ComboMoveType__Enum
} // namespace app::classes::types
