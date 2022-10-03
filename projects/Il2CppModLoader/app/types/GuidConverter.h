#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GuidConverter {
        namespace {
            app::GuidConverter__Class* type_info_ref = nullptr;
        }
        app::GuidConverter__Class** type_info = &type_info_ref;
        inline app::GuidConverter__Class* get_class() {
            return il2cpp::get_class<app::GuidConverter__Class>(type_info, "System.ComponentModel", "GuidConverter");
        }
        inline app::GuidConverter* create() {
            return il2cpp::create_object<app::GuidConverter>(get_class());
        }
    } // namespace GuidConverter
} // namespace app::classes::types
