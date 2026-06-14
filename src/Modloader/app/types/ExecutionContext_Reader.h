#pragma once
#include <Modloader/app/structs/ExecutionContext_Reader.h>
#include <Modloader/app/structs/ExecutionContext_Reader__Boxed.h>
#include <Modloader/app/structs/ExecutionContext_Reader__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExecutionContext_Reader {
        inline app::ExecutionContext_Reader__Class** type_info() {
            static app::ExecutionContext_Reader__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ExecutionContext_Reader__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ExecutionContext_Reader__Class* get_class() {
            return il2cpp::get_nested_class<app::ExecutionContext_Reader__Class>(type_info(), "System.Threading", "ExecutionContext", "Reader");
        }
        inline app::ExecutionContext_Reader* create() {
            return il2cpp::create_object<app::ExecutionContext_Reader>(get_class());
        }
        inline app::ExecutionContext_Reader__Boxed* box(app::ExecutionContext_Reader value) {
            return il2cpp::box_value<app::ExecutionContext_Reader__Boxed>(get_class(), value);
        }
    } // namespace ExecutionContext_Reader
} // namespace app::classes::types
