#pragma once
#include <Modloader/app/structs/Entry__Array.h>
#include <Modloader/app/structs/Entry__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Entry__Array {
        inline app::Entry__Array__Class** type_info() {
            static app::Entry__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Entry__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Entry__Array__Class* get_class() {
            return il2cpp::get_class<app::Entry__Array__Class>(type_info(), "Moon.Race.Networking", "Entry[]");
        }
        inline app::Entry__Array* create() {
            return il2cpp::create_object<app::Entry__Array>(get_class());
        }
    } // namespace Entry__Array
} // namespace app::classes::types
