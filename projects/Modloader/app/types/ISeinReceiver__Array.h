#pragma once
#include <Modloader/app/structs/ISeinReceiver__Array.h>
#include <Modloader/app/structs/ISeinReceiver__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ISeinReceiver__Array {
        inline app::ISeinReceiver__Array__Class** type_info() {
            static app::ISeinReceiver__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ISeinReceiver__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ISeinReceiver__Array__Class* get_class() {
            return il2cpp::get_class<app::ISeinReceiver__Array__Class>(type_info(), "", "ISeinReceiver[]");
        }
        inline app::ISeinReceiver__Array* create() {
            return il2cpp::create_object<app::ISeinReceiver__Array>(get_class());
        }
    } // namespace ISeinReceiver__Array
} // namespace app::classes::types
