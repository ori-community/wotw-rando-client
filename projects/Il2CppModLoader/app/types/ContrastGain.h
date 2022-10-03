#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ContrastGain {
        namespace {
            app::ContrastGain__Class* type_info_ref = nullptr;
        }
        app::ContrastGain__Class** type_info = &type_info_ref;
        inline app::ContrastGain__Class* get_class() {
            return il2cpp::get_class<app::ContrastGain__Class>(type_info, "Colorful", "ContrastGain");
        }
        inline app::ContrastGain* create() {
            return il2cpp::create_object<app::ContrastGain>(get_class());
        }
    } // namespace ContrastGain
} // namespace app::classes::types
