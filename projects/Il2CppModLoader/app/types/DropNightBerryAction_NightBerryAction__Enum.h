#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DropNightBerryAction_NightBerryAction__Enum {
        namespace {
            app::DropNightBerryAction_NightBerryAction__Enum__Class* type_info_ref = nullptr;
        }
        app::DropNightBerryAction_NightBerryAction__Enum__Class** type_info = &type_info_ref;
        inline app::DropNightBerryAction_NightBerryAction__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::DropNightBerryAction_NightBerryAction__Enum__Class>(type_info, "", "DropNightBerryAction", "NightBerryAction");
        }
        inline app::DropNightBerryAction_NightBerryAction__Enum* create() {
            return il2cpp::create_object<app::DropNightBerryAction_NightBerryAction__Enum>(get_class());
        }
    } // namespace DropNightBerryAction_NightBerryAction__Enum
} // namespace app::classes::types
