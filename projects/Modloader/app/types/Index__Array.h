#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Index__Array {
        namespace {
            inline app::Index__Array__Class* type_info_ref = nullptr;
        }
        inline app::Index__Array__Class** type_info = &type_info_ref;
        inline app::Index__Array__Class* get_class() {
            return il2cpp::get_class<app::Index__Array__Class>(type_info, "System.Data", "Index[]");
        }
        inline app::Index__Array* create() {
            return il2cpp::create_object<app::Index__Array>(get_class());
        }
    } // namespace Index__Array
} // namespace app::classes::types
