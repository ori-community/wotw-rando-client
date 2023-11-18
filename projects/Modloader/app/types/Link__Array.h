#pragma once
#include <Modloader/app/structs/Link__Array.h>
#include <Modloader/app/structs/Link__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Link__Array {
        inline app::Link__Array__Class** type_info() {
            static app::Link__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Link__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Link__Array__Class* get_class() {
            return il2cpp::get_class<app::Link__Array__Class>(type_info(), "", "Link[]");
        }
        inline app::Link__Array* create() {
            return il2cpp::create_object<app::Link__Array>(get_class());
        }
    } // namespace Link__Array
} // namespace app::classes::types
