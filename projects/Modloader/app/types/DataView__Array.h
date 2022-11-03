#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DataView__Array {
        namespace {
            inline app::DataView__Array__Class* type_info_ref = nullptr;
        }
        inline app::DataView__Array__Class** type_info = &type_info_ref;
        inline app::DataView__Array__Class* get_class() {
            return il2cpp::get_class<app::DataView__Array__Class>(type_info, "System.Data", "DataView[]");
        }
        inline app::DataView__Array* create() {
            return il2cpp::create_object<app::DataView__Array>(get_class());
        }
    } // namespace DataView__Array
} // namespace app::classes::types
