#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonGetAbilityPedestal__Array {
        namespace {
            app::MoonGetAbilityPedestal__Array__Class* type_info_ref = nullptr;
        }
        app::MoonGetAbilityPedestal__Array__Class** type_info = &type_info_ref;
        inline app::MoonGetAbilityPedestal__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonGetAbilityPedestal__Array__Class>(type_info, "", "MoonGetAbilityPedestal[]");
        }
        inline app::MoonGetAbilityPedestal__Array* create() {
            return il2cpp::create_object<app::MoonGetAbilityPedestal__Array>(get_class());
        }
    } // namespace MoonGetAbilityPedestal__Array
} // namespace app::classes::types
