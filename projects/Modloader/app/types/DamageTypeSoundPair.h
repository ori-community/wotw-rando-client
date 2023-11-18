#pragma once
#include <Modloader/app/structs/DamageTypeSoundPair.h>
#include <Modloader/app/structs/DamageTypeSoundPair__Array.h>
#include <Modloader/app/structs/DamageTypeSoundPair__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DamageTypeSoundPair {
        inline app::DamageTypeSoundPair__Class** type_info() {
            static app::DamageTypeSoundPair__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DamageTypeSoundPair__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DamageTypeSoundPair__Class* get_class() {
            return il2cpp::get_class<app::DamageTypeSoundPair__Class>(type_info(), "", "DamageTypeSoundPair");
        }
        inline app::DamageTypeSoundPair* create() {
            return il2cpp::create_object<app::DamageTypeSoundPair>(get_class());
        }
        inline app::DamageTypeSoundPair__Array* create_array(int size) {
            return il2cpp::array_new<app::DamageTypeSoundPair__Array>(get_class(), size);
        }
        inline app::DamageTypeSoundPair__Array* create_array(const std::vector<app::DamageTypeSoundPair*>& items) {
            return il2cpp::array_new<app::DamageTypeSoundPair__Array>(get_class(), items);
        }
    } // namespace DamageTypeSoundPair
} // namespace app::classes::types
