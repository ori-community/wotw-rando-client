#pragma once
#include <Modloader/app/structs/BlockDamageInterruptionHandler__Array.h>
#include <Modloader/app/structs/BlockDamageInterruptionHandler__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BlockDamageInterruptionHandler__Array {
        inline app::BlockDamageInterruptionHandler__Array__Class** type_info() {
            static app::BlockDamageInterruptionHandler__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BlockDamageInterruptionHandler__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BlockDamageInterruptionHandler__Array__Class* get_class() {
            return il2cpp::get_class<app::BlockDamageInterruptionHandler__Array__Class>(type_info(), "Moon", "BlockDamageInterruptionHandler[]");
        }
        inline app::BlockDamageInterruptionHandler__Array* create() {
            return il2cpp::create_object<app::BlockDamageInterruptionHandler__Array>(get_class());
        }
    } // namespace BlockDamageInterruptionHandler__Array
} // namespace app::classes::types
