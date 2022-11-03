#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WarningHeaderValue__Array {
        namespace {
            inline app::WarningHeaderValue__Array__Class* type_info_ref = nullptr;
        }
        inline app::WarningHeaderValue__Array__Class** type_info = &type_info_ref;
        inline app::WarningHeaderValue__Array__Class* get_class() {
            return il2cpp::get_class<app::WarningHeaderValue__Array__Class>(type_info, "System.Net.Http.Headers", "WarningHeaderValue[]");
        }
        inline app::WarningHeaderValue__Array* create() {
            return il2cpp::create_object<app::WarningHeaderValue__Array>(get_class());
        }
    } // namespace WarningHeaderValue__Array
} // namespace app::classes::types
