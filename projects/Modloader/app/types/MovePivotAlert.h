#pragma once
#include <Modloader/app/structs/MovePivotAlert.h>
#include <Modloader/app/structs/MovePivotAlert__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MovePivotAlert {
        inline app::MovePivotAlert__Class** type_info() {
            static app::MovePivotAlert__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MovePivotAlert__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MovePivotAlert__Class* get_class() {
            return il2cpp::get_class<app::MovePivotAlert__Class>(type_info(), "", "MovePivotAlert");
        }
        inline app::MovePivotAlert* create() {
            return il2cpp::create_object<app::MovePivotAlert>(get_class());
        }
    } // namespace MovePivotAlert
} // namespace app::classes::types
