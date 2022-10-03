#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SetRotationFromDamage {
        namespace {
            app::SetRotationFromDamage__Class* type_info_ref = nullptr;
        }
        app::SetRotationFromDamage__Class** type_info = &type_info_ref;
        inline app::SetRotationFromDamage__Class* get_class() {
            return il2cpp::get_class<app::SetRotationFromDamage__Class>(type_info, "", "SetRotationFromDamage");
        }
        inline app::SetRotationFromDamage* create() {
            return il2cpp::create_object<app::SetRotationFromDamage>(get_class());
        }
    } // namespace SetRotationFromDamage
} // namespace app::classes::types
