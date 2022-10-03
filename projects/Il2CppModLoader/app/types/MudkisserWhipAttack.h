#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MudkisserWhipAttack {
        namespace {
            app::MudkisserWhipAttack__Class* type_info_ref = nullptr;
        }
        app::MudkisserWhipAttack__Class** type_info = &type_info_ref;
        inline app::MudkisserWhipAttack__Class* get_class() {
            return il2cpp::get_class<app::MudkisserWhipAttack__Class>(type_info, "", "MudkisserWhipAttack");
        }
        inline app::MudkisserWhipAttack* create() {
            return il2cpp::create_object<app::MudkisserWhipAttack>(get_class());
        }
    } // namespace MudkisserWhipAttack
} // namespace app::classes::types
