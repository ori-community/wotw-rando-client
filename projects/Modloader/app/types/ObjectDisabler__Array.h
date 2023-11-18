#pragma once
#include <Modloader/app/structs/ObjectDisabler__Array.h>
#include <Modloader/app/structs/ObjectDisabler__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ObjectDisabler__Array {
        inline app::ObjectDisabler__Array__Class** type_info() {
            static app::ObjectDisabler__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ObjectDisabler__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ObjectDisabler__Array__Class* get_class() {
            return il2cpp::get_class<app::ObjectDisabler__Array__Class>(type_info(), "Moon.Utilities", "ObjectDisabler[]");
        }
        inline app::ObjectDisabler__Array* create() {
            return il2cpp::create_object<app::ObjectDisabler__Array>(get_class());
        }
    } // namespace ObjectDisabler__Array
} // namespace app::classes::types
