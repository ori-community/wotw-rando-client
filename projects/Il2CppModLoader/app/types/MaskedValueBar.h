#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MaskedValueBar {
        namespace {
            app::MaskedValueBar__Class* type_info_ref = nullptr;
        }
        app::MaskedValueBar__Class** type_info = &type_info_ref;
        inline app::MaskedValueBar__Class* get_class() {
            return il2cpp::get_class<app::MaskedValueBar__Class>(type_info, "", "MaskedValueBar");
        }
        inline app::MaskedValueBar* create() {
            return il2cpp::create_object<app::MaskedValueBar>(get_class());
        }
    } // namespace MaskedValueBar
} // namespace app::classes::types
