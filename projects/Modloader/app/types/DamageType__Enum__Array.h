#pragma once
#include <Modloader/app/structs/DamageType__Enum__Array.h>
#include <Modloader/app/structs/DamageType__Enum__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DamageType__Enum__Array {
        inline app::DamageType__Enum__Array__Class** type_info() {
            static app::DamageType__Enum__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DamageType__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x0472DDD8));
            }
            return cache;
        }
        inline app::DamageType__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::DamageType__Enum__Array__Class>(type_info(), "", "DamageType[]");
        }
        inline app::DamageType__Enum__Array* create() {
            return il2cpp::create_object<app::DamageType__Enum__Array>(get_class());
        }
    } // namespace DamageType__Enum__Array
} // namespace app::classes::types
