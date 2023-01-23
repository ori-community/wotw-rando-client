#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DataViewListener__Array__Class.h>
#include <Modloader/app/structs/DataViewListener__Array.h>

namespace app::classes::types {
    namespace DataViewListener__Array {
        namespace {
            inline app::DataViewListener__Array__Class* type_info_ref = nullptr;
        }
        inline app::DataViewListener__Array__Class** type_info = &type_info_ref;
        inline app::DataViewListener__Array__Class* get_class() {
            return il2cpp::get_class<app::DataViewListener__Array__Class>(type_info, "System.Data", "DataViewListener[]");
        }
        inline app::DataViewListener__Array* create() {
            return il2cpp::create_object<app::DataViewListener__Array>(get_class());
        }
    } // namespace DataViewListener__Array
} // namespace app::classes::types
