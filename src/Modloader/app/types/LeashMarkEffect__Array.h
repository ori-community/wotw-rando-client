#pragma once
#include <Modloader/app/structs/LeashMarkEffect__Array.h>
#include <Modloader/app/structs/LeashMarkEffect__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LeashMarkEffect__Array {
        inline app::LeashMarkEffect__Array__Class** type_info() {
            static app::LeashMarkEffect__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LeashMarkEffect__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LeashMarkEffect__Array__Class* get_class() {
            return il2cpp::get_class<app::LeashMarkEffect__Array__Class>(type_info(), "", "LeashMarkEffect[]");
        }
        inline app::LeashMarkEffect__Array* create() {
            return il2cpp::create_object<app::LeashMarkEffect__Array>(get_class());
        }
    } // namespace LeashMarkEffect__Array
} // namespace app::classes::types
