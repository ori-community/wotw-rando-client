#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LightAttackData__Array {
        namespace {
            app::LightAttackData__Array__Class* type_info_ref = nullptr;
        }
        app::LightAttackData__Array__Class** type_info = &type_info_ref;
        inline app::LightAttackData__Array__Class* get_class() {
            return il2cpp::get_class<app::LightAttackData__Array__Class>(type_info, "", "LightAttackData[]");
        }
        inline app::LightAttackData__Array* create() {
            return il2cpp::create_object<app::LightAttackData__Array>(get_class());
        }
    } // namespace LightAttackData__Array
} // namespace app::classes::types
