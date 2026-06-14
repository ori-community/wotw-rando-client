#pragma once
#include <Modloader/app/structs/UberPoolGroup__Array.h>
#include <Modloader/app/structs/UberPoolGroup__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberPoolGroup__Array {
        inline app::UberPoolGroup__Array__Class** type_info() {
            static app::UberPoolGroup__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberPoolGroup__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberPoolGroup__Array__Class* get_class() {
            return il2cpp::get_class<app::UberPoolGroup__Array__Class>(type_info(), "", "UberPoolGroup[]");
        }
        inline app::UberPoolGroup__Array* create() {
            return il2cpp::create_object<app::UberPoolGroup__Array>(get_class());
        }
    } // namespace UberPoolGroup__Array
} // namespace app::classes::types
