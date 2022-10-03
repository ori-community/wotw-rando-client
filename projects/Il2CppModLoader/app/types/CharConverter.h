#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CharConverter {
        namespace {
            app::CharConverter__Class* type_info_ref = nullptr;
        }
        app::CharConverter__Class** type_info = &type_info_ref;
        inline app::CharConverter__Class* get_class() {
            return il2cpp::get_class<app::CharConverter__Class>(type_info, "System.ComponentModel", "CharConverter");
        }
        inline app::CharConverter* create() {
            return il2cpp::create_object<app::CharConverter>(get_class());
        }
    } // namespace CharConverter
} // namespace app::classes::types
