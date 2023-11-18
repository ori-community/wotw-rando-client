#pragma once
#include <Modloader/app/structs/MudkisseBiteDashAttack.h>
#include <Modloader/app/structs/MudkisseBiteDashAttack__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MudkisseBiteDashAttack {
        inline app::MudkisseBiteDashAttack__Class** type_info() {
            static app::MudkisseBiteDashAttack__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MudkisseBiteDashAttack__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MudkisseBiteDashAttack__Class* get_class() {
            return il2cpp::get_class<app::MudkisseBiteDashAttack__Class>(type_info(), "", "MudkisseBiteDashAttack");
        }
        inline app::MudkisseBiteDashAttack* create() {
            return il2cpp::create_object<app::MudkisseBiteDashAttack>(get_class());
        }
    } // namespace MudkisseBiteDashAttack
} // namespace app::classes::types
