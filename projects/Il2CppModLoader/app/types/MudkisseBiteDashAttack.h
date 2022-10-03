#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MudkisseBiteDashAttack {
        namespace {
            app::MudkisseBiteDashAttack__Class* type_info_ref = nullptr;
        }
        app::MudkisseBiteDashAttack__Class** type_info = &type_info_ref;
        inline app::MudkisseBiteDashAttack__Class* get_class() {
            return il2cpp::get_class<app::MudkisseBiteDashAttack__Class>(type_info, "", "MudkisseBiteDashAttack");
        }
        inline app::MudkisseBiteDashAttack* create() {
            return il2cpp::create_object<app::MudkisseBiteDashAttack>(get_class());
        }
    } // namespace MudkisseBiteDashAttack
} // namespace app::classes::types
