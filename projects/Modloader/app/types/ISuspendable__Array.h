#pragma once
#include <Modloader/app/structs/ISuspendable__Array.h>
#include <Modloader/app/structs/ISuspendable__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ISuspendable__Array {
        inline app::ISuspendable__Array__Class** type_info() {
            static app::ISuspendable__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ISuspendable__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ISuspendable__Array__Class* get_class() {
            return il2cpp::get_class<app::ISuspendable__Array__Class>(type_info(), "Moon", "ISuspendable[]");
        }
        inline app::ISuspendable__Array* create() {
            return il2cpp::create_object<app::ISuspendable__Array>(get_class());
        }
    } // namespace ISuspendable__Array
} // namespace app::classes::types
