#pragma once
#include <Modloader/app/structs/LegacyDamageReciever__Array.h>
#include <Modloader/app/structs/LegacyDamageReciever__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyDamageReciever__Array {
        inline app::LegacyDamageReciever__Array__Class** type_info() {
            static app::LegacyDamageReciever__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacyDamageReciever__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacyDamageReciever__Array__Class* get_class() {
            return il2cpp::get_class<app::LegacyDamageReciever__Array__Class>(type_info(), "", "LegacyDamageReciever[]");
        }
        inline app::LegacyDamageReciever__Array* create() {
            return il2cpp::create_object<app::LegacyDamageReciever__Array>(get_class());
        }
    } // namespace LegacyDamageReciever__Array
} // namespace app::classes::types
