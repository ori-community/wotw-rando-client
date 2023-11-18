#pragma once
#include <Modloader/app/structs/RangeItemHeaderValue__Array.h>
#include <Modloader/app/structs/RangeItemHeaderValue__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RangeItemHeaderValue__Array {
        inline app::RangeItemHeaderValue__Array__Class** type_info() {
            static app::RangeItemHeaderValue__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RangeItemHeaderValue__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RangeItemHeaderValue__Array__Class* get_class() {
            return il2cpp::get_class<app::RangeItemHeaderValue__Array__Class>(type_info(), "System.Net.Http.Headers", "RangeItemHeaderValue[]");
        }
        inline app::RangeItemHeaderValue__Array* create() {
            return il2cpp::create_object<app::RangeItemHeaderValue__Array>(get_class());
        }
    } // namespace RangeItemHeaderValue__Array
} // namespace app::classes::types
