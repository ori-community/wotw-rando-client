#pragma once
#include <Modloader/app/structs/DamageRecieverType__Enum__Array.h>
#include <Modloader/app/structs/DamageRecieverType__Enum__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DamageRecieverType__Enum__Array {
        inline app::DamageRecieverType__Enum__Array__Class** type_info() {
            static app::DamageRecieverType__Enum__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DamageRecieverType__Enum__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DamageRecieverType__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::DamageRecieverType__Enum__Array__Class>(type_info(), "", "DamageRecieverType[]");
        }
        inline app::DamageRecieverType__Enum__Array* create() {
            return il2cpp::create_object<app::DamageRecieverType__Enum__Array>(get_class());
        }
    } // namespace DamageRecieverType__Enum__Array
} // namespace app::classes::types
