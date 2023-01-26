#pragma once
#include <Modloader/app/structs/IMontageEventProvider__Array.h>
#include <Modloader/app/structs/IMontageEventProvider__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IMontageEventProvider__Array {
        inline app::IMontageEventProvider__Array__Class** type_info() {
            static app::IMontageEventProvider__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IMontageEventProvider__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IMontageEventProvider__Array__Class* get_class() {
            return il2cpp::get_class<app::IMontageEventProvider__Array__Class>(type_info(), "", "IMontageEventProvider[]");
        }
        inline app::IMontageEventProvider__Array* create() {
            return il2cpp::create_object<app::IMontageEventProvider__Array>(get_class());
        }
    } // namespace IMontageEventProvider__Array
} // namespace app::classes::types
