#pragma once
#include <Modloader/app/structs/ComboMoveOrderCondition__Enum.h>
#include <Modloader/app/structs/ComboMoveOrderCondition__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ComboMoveOrderCondition__Enum {
        inline app::ComboMoveOrderCondition__Enum__Class** type_info() {
            static app::ComboMoveOrderCondition__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ComboMoveOrderCondition__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ComboMoveOrderCondition__Enum__Class* get_class() {
            return il2cpp::get_class<app::ComboMoveOrderCondition__Enum__Class>(type_info(), "Moon.ComboSystem", "ComboMoveOrderCondition");
        }
        inline app::ComboMoveOrderCondition__Enum* create() {
            return il2cpp::create_object<app::ComboMoveOrderCondition__Enum>(get_class());
        }
    } // namespace ComboMoveOrderCondition__Enum
} // namespace app::classes::types
