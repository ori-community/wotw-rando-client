#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RangeItemHeaderValue__Array {
        namespace {
            inline app::RangeItemHeaderValue__Array__Class* type_info_ref = nullptr;
        }
        inline app::RangeItemHeaderValue__Array__Class** type_info = &type_info_ref;
        inline app::RangeItemHeaderValue__Array__Class* get_class() {
            return il2cpp::get_class<app::RangeItemHeaderValue__Array__Class>(type_info, "System.Net.Http.Headers", "RangeItemHeaderValue[]");
        }
        inline app::RangeItemHeaderValue__Array* create() {
            return il2cpp::create_object<app::RangeItemHeaderValue__Array>(get_class());
        }
    } // namespace RangeItemHeaderValue__Array
} // namespace app::classes::types
