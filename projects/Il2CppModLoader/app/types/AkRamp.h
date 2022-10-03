#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkRamp {
        namespace {
            app::AkRamp__Class* type_info_ref = nullptr;
        }
        app::AkRamp__Class** type_info = &type_info_ref;
        inline app::AkRamp__Class* get_class() {
            return il2cpp::get_class<app::AkRamp__Class>(type_info, "", "AkRamp");
        }
        inline app::AkRamp* create() {
            return il2cpp::create_object<app::AkRamp>(get_class());
        }
    } // namespace AkRamp
} // namespace app::classes::types
