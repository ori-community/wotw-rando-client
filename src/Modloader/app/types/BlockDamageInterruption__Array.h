#pragma once
#include <Modloader/app/structs/BlockDamageInterruption__Array.h>
#include <Modloader/app/structs/BlockDamageInterruption__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BlockDamageInterruption__Array {
        inline app::BlockDamageInterruption__Array__Class** type_info() {
            static app::BlockDamageInterruption__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BlockDamageInterruption__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BlockDamageInterruption__Array__Class* get_class() {
            return il2cpp::get_class<app::BlockDamageInterruption__Array__Class>(type_info(), "Moon.Timeline", "BlockDamageInterruption[]");
        }
        inline app::BlockDamageInterruption__Array* create() {
            return il2cpp::create_object<app::BlockDamageInterruption__Array>(get_class());
        }
    } // namespace BlockDamageInterruption__Array
} // namespace app::classes::types
