#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FPSSampleData__Array {
        namespace {
            inline app::FPSSampleData__Array__Class* type_info_ref = nullptr;
        }
        inline app::FPSSampleData__Array__Class** type_info = &type_info_ref;
        inline app::FPSSampleData__Array__Class* get_class() {
            return il2cpp::get_class<app::FPSSampleData__Array__Class>(type_info, "", "FPSSampleData[]");
        }
        inline app::FPSSampleData__Array* create() {
            return il2cpp::create_object<app::FPSSampleData__Array>(get_class());
        }
    } // namespace FPSSampleData__Array
} // namespace app::classes::types
