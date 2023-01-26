#pragma once
#include <Modloader/app/structs/SeinBounceAbility.h>
#include <Modloader/app/structs/SeinBounceAbility__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinBounceAbility {
        inline app::SeinBounceAbility__Class** type_info() {
            static app::SeinBounceAbility__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinBounceAbility__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinBounceAbility__Class* get_class() {
            return il2cpp::get_class<app::SeinBounceAbility__Class>(type_info(), "", "SeinBounceAbility");
        }
        inline app::SeinBounceAbility* create() {
            return il2cpp::create_object<app::SeinBounceAbility>(get_class());
        }
    } // namespace SeinBounceAbility
} // namespace app::classes::types
