#pragma once
#include <Modloader/app/structs/UberPoolItem__Array.h>
#include <Modloader/app/structs/UberPoolItem__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberPoolItem__Array {
        inline app::UberPoolItem__Array__Class** type_info() {
            static app::UberPoolItem__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberPoolItem__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberPoolItem__Array__Class* get_class() {
            return il2cpp::get_class<app::UberPoolItem__Array__Class>(type_info(), "", "UberPoolItem[]");
        }
        inline app::UberPoolItem__Array* create() {
            return il2cpp::create_object<app::UberPoolItem__Array>(get_class());
        }
    } // namespace UberPoolItem__Array
} // namespace app::classes::types
