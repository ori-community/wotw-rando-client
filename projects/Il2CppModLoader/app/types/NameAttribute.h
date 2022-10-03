#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NameAttribute {
        namespace {
            app::NameAttribute__Class* type_info_ref = nullptr;
        }
        app::NameAttribute__Class** type_info = &type_info_ref;
        inline app::NameAttribute__Class* get_class() {
            return il2cpp::get_class<app::NameAttribute__Class>(type_info, "Moon.EffectsFramework", "NameAttribute");
        }
        inline app::NameAttribute* create() {
            return il2cpp::create_object<app::NameAttribute>(get_class());
        }
    } // namespace NameAttribute
} // namespace app::classes::types
