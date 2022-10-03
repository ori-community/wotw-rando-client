#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NightBerryResponder {
        namespace {
            app::NightBerryResponder__Class* type_info_ref = nullptr;
        }
        app::NightBerryResponder__Class** type_info = &type_info_ref;
        inline app::NightBerryResponder__Class* get_class() {
            return il2cpp::get_class<app::NightBerryResponder__Class>(type_info, "", "NightBerryResponder");
        }
        inline app::NightBerryResponder* create() {
            return il2cpp::create_object<app::NightBerryResponder>(get_class());
        }
    } // namespace NightBerryResponder
} // namespace app::classes::types
