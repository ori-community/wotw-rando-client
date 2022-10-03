#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CultureInfoConverter {
        namespace {
            app::CultureInfoConverter__Class* type_info_ref = nullptr;
        }
        app::CultureInfoConverter__Class** type_info = &type_info_ref;
        inline app::CultureInfoConverter__Class* get_class() {
            return il2cpp::get_class<app::CultureInfoConverter__Class>(type_info, "System.ComponentModel", "CultureInfoConverter");
        }
        inline app::CultureInfoConverter* create() {
            return il2cpp::create_object<app::CultureInfoConverter>(get_class());
        }
    } // namespace CultureInfoConverter
} // namespace app::classes::types
