#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DamageType__Enum__Array__Class.h>
#include <Modloader/app/structs/DamageType__Enum__Array.h>

namespace app::classes::types {
    namespace DamageType__Enum__Array {
        inline app::DamageType__Enum__Array__Class** type_info = (app::DamageType__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x0472DDD8));
        inline app::DamageType__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::DamageType__Enum__Array__Class>(type_info, "", "DamageType[]");
        }
        inline app::DamageType__Enum__Array* create() {
            return il2cpp::create_object<app::DamageType__Enum__Array>(get_class());
        }
    } // namespace DamageType__Enum__Array
} // namespace app::classes::types
