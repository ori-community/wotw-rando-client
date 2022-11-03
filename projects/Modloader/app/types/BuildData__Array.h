#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BuildData__Array {
        namespace {
            inline app::BuildData__Array__Class* type_info_ref = nullptr;
        }
        inline app::BuildData__Array__Class** type_info = &type_info_ref;
        inline app::BuildData__Array__Class* get_class() {
            return il2cpp::get_class<app::BuildData__Array__Class>(type_info, "", "BuildData[]");
        }
        inline app::BuildData__Array* create() {
            return il2cpp::create_object<app::BuildData__Array>(get_class());
        }
    } // namespace BuildData__Array
} // namespace app::classes::types
