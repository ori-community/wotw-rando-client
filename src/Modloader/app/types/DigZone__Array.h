#pragma once
#include <Modloader/app/structs/DigZone__Array.h>
#include <Modloader/app/structs/DigZone__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DigZone__Array {
        inline app::DigZone__Array__Class** type_info() {
            static app::DigZone__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DigZone__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DigZone__Array__Class* get_class() {
            return il2cpp::get_class<app::DigZone__Array__Class>(type_info(), "", "DigZone[]");
        }
        inline app::DigZone__Array* create() {
            return il2cpp::create_object<app::DigZone__Array>(get_class());
        }
    } // namespace DigZone__Array
} // namespace app::classes::types
