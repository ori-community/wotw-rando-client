#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DropNightBerryAction {
        namespace {
            app::DropNightBerryAction__Class* type_info_ref = nullptr;
        }
        app::DropNightBerryAction__Class** type_info = &type_info_ref;
        inline app::DropNightBerryAction__Class* get_class() {
            return il2cpp::get_class<app::DropNightBerryAction__Class>(type_info, "", "DropNightBerryAction");
        }
        inline app::DropNightBerryAction* create() {
            return il2cpp::create_object<app::DropNightBerryAction>(get_class());
        }
    } // namespace DropNightBerryAction
} // namespace app::classes::types
