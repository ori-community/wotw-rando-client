#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SRDescriptionAttribute {
        namespace {
            app::SRDescriptionAttribute__Class* type_info_ref = nullptr;
        }
        app::SRDescriptionAttribute__Class** type_info = &type_info_ref;
        inline app::SRDescriptionAttribute__Class* get_class() {
            return il2cpp::get_class<app::SRDescriptionAttribute__Class>(type_info, "System", "SRDescriptionAttribute");
        }
        inline app::SRDescriptionAttribute* create() {
            return il2cpp::create_object<app::SRDescriptionAttribute>(get_class());
        }
    } // namespace SRDescriptionAttribute
} // namespace app::classes::types
