#pragma once
#include <Modloader/app/structs/MudkisserWhipAttack.h>
#include <Modloader/app/structs/MudkisserWhipAttack__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MudkisserWhipAttack {
        inline app::MudkisserWhipAttack__Class** type_info() {
            static app::MudkisserWhipAttack__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MudkisserWhipAttack__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MudkisserWhipAttack__Class* get_class() {
            return il2cpp::get_class<app::MudkisserWhipAttack__Class>(type_info(), "", "MudkisserWhipAttack");
        }
        inline app::MudkisserWhipAttack* create() {
            return il2cpp::create_object<app::MudkisserWhipAttack>(get_class());
        }
    } // namespace MudkisserWhipAttack
} // namespace app::classes::types
