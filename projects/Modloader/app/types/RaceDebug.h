#pragma once
#include <Modloader/app/structs/RaceDebug.h>
#include <Modloader/app/structs/RaceDebug__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RaceDebug {
        inline app::RaceDebug__Class** type_info() {
            static app::RaceDebug__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RaceDebug__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RaceDebug__Class* get_class() {
            return il2cpp::get_class<app::RaceDebug__Class>(type_info(), "", "RaceDebug");
        }
        inline app::RaceDebug* create() {
            return il2cpp::create_object<app::RaceDebug>(get_class());
        }
    } // namespace RaceDebug
} // namespace app::classes::types
