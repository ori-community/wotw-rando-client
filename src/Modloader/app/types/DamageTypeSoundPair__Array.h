#pragma once
#include <Modloader/app/structs/DamageTypeSoundPair__Array.h>
#include <Modloader/app/structs/DamageTypeSoundPair__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DamageTypeSoundPair__Array {
        inline app::DamageTypeSoundPair__Array__Class** type_info() {
            static app::DamageTypeSoundPair__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DamageTypeSoundPair__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DamageTypeSoundPair__Array__Class* get_class() {
            return il2cpp::get_class<app::DamageTypeSoundPair__Array__Class>(type_info(), "", "DamageTypeSoundPair[]");
        }
        inline app::DamageTypeSoundPair__Array* create() {
            return il2cpp::create_object<app::DamageTypeSoundPair__Array>(get_class());
        }
    } // namespace DamageTypeSoundPair__Array
} // namespace app::classes::types
