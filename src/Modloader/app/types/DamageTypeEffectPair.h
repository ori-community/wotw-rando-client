#pragma once
#include <Modloader/app/structs/DamageTypeEffectPair.h>
#include <Modloader/app/structs/DamageTypeEffectPair__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DamageTypeEffectPair {
        inline app::DamageTypeEffectPair__Class** type_info() {
            static app::DamageTypeEffectPair__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DamageTypeEffectPair__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DamageTypeEffectPair__Class* get_class() {
            return il2cpp::get_class<app::DamageTypeEffectPair__Class>(type_info(), "", "DamageTypeEffectPair");
        }
        inline app::DamageTypeEffectPair* create() {
            return il2cpp::create_object<app::DamageTypeEffectPair>(get_class());
        }
    } // namespace DamageTypeEffectPair
} // namespace app::classes::types
