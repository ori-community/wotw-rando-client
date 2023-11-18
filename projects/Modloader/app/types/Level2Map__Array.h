#pragma once
#include <Modloader/app/structs/Level2Map__Array.h>
#include <Modloader/app/structs/Level2Map__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Level2Map__Array {
        inline app::Level2Map__Array__Class** type_info() {
            static app::Level2Map__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Level2Map__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Level2Map__Array__Class* get_class() {
            return il2cpp::get_class<app::Level2Map__Array__Class>(type_info(), "Mono.Globalization.Unicode", "Level2Map[]");
        }
        inline app::Level2Map__Array* create() {
            return il2cpp::create_object<app::Level2Map__Array>(get_class());
        }
    } // namespace Level2Map__Array
} // namespace app::classes::types
