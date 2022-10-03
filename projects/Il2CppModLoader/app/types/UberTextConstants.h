#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberTextConstants {
        namespace {
            app::UberTextConstants__Class* type_info_ref = nullptr;
        }
        app::UberTextConstants__Class** type_info = &type_info_ref;
        inline app::UberTextConstants__Class* get_class() {
            return il2cpp::get_class<app::UberTextConstants__Class>(type_info, "", "UberTextConstants");
        }
        inline app::UberTextConstants* create() {
            return il2cpp::create_object<app::UberTextConstants>(get_class());
        }
    } // namespace UberTextConstants
} // namespace app::classes::types
