#pragma once
#include <Modloader/app/structs/Counter.h>
#include <Modloader/app/structs/Counter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Counter {
        inline app::Counter__Class** type_info() {
            static app::Counter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Counter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Counter__Class* get_class() {
            return il2cpp::get_class<app::Counter__Class>(type_info(), "", "Counter");
        }
        inline app::Counter* create() {
            return il2cpp::create_object<app::Counter>(get_class());
        }
    } // namespace Counter
} // namespace app::classes::types
