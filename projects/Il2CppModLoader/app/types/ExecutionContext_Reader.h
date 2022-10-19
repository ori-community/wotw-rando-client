#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ExecutionContext_Reader {
        namespace {
            inline app::ExecutionContext_Reader__Class* type_info_ref = nullptr;
        }
        inline app::ExecutionContext_Reader__Class** type_info = &type_info_ref;
        inline app::ExecutionContext_Reader__Class* get_class() {
            return il2cpp::get_nested_class<app::ExecutionContext_Reader__Class>(type_info, "System.Threading", "ExecutionContext", "Reader");
        }
        inline app::ExecutionContext_Reader* create() {
            return il2cpp::create_object<app::ExecutionContext_Reader>(get_class());
        }
        inline app::ExecutionContext_Reader__Boxed* box(app::ExecutionContext_Reader value) {
            return il2cpp::box_value<app::ExecutionContext_Reader__Boxed>(get_class(), value);
        }
    } // namespace ExecutionContext_Reader
} // namespace app::classes::types
