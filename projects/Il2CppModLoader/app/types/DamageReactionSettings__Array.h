#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DamageReactionSettings__Array {
        namespace {
            app::DamageReactionSettings__Array__Class* type_info_ref = nullptr;
        }
        app::DamageReactionSettings__Array__Class** type_info = &type_info_ref;
        inline app::DamageReactionSettings__Array__Class* get_class() {
            return il2cpp::get_class<app::DamageReactionSettings__Array__Class>(type_info, "", "DamageReactionSettings[]");
        }
        inline app::DamageReactionSettings__Array* create() {
            return il2cpp::create_object<app::DamageReactionSettings__Array>(get_class());
        }
    } // namespace DamageReactionSettings__Array
} // namespace app::classes::types
