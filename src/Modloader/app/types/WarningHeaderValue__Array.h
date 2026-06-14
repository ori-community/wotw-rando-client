#pragma once
#include <Modloader/app/structs/WarningHeaderValue__Array.h>
#include <Modloader/app/structs/WarningHeaderValue__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WarningHeaderValue__Array {
        inline app::WarningHeaderValue__Array__Class** type_info() {
            static app::WarningHeaderValue__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WarningHeaderValue__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WarningHeaderValue__Array__Class* get_class() {
            return il2cpp::get_class<app::WarningHeaderValue__Array__Class>(type_info(), "System.Net.Http.Headers", "WarningHeaderValue[]");
        }
        inline app::WarningHeaderValue__Array* create() {
            return il2cpp::create_object<app::WarningHeaderValue__Array>(get_class());
        }
    } // namespace WarningHeaderValue__Array
} // namespace app::classes::types
