#pragma once
#include <Modloader/app/structs/DropNightBerryAction_NightBerryAction__Enum.h>
#include <Modloader/app/structs/DropNightBerryAction_NightBerryAction__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DropNightBerryAction_NightBerryAction__Enum {
        inline app::DropNightBerryAction_NightBerryAction__Enum__Class** type_info() {
            static app::DropNightBerryAction_NightBerryAction__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DropNightBerryAction_NightBerryAction__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DropNightBerryAction_NightBerryAction__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::DropNightBerryAction_NightBerryAction__Enum__Class>(type_info(), "", "DropNightBerryAction", "NightBerryAction");
        }
        inline app::DropNightBerryAction_NightBerryAction__Enum* create() {
            return il2cpp::create_object<app::DropNightBerryAction_NightBerryAction__Enum>(get_class());
        }
    } // namespace DropNightBerryAction_NightBerryAction__Enum
} // namespace app::classes::types
