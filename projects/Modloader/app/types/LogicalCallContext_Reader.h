#pragma once
#include <Modloader/app/structs/LogicalCallContext_Reader.h>
#include <Modloader/app/structs/LogicalCallContext_Reader__Boxed.h>
#include <Modloader/app/structs/LogicalCallContext_Reader__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LogicalCallContext_Reader {
        inline app::LogicalCallContext_Reader__Class** type_info() {
            static app::LogicalCallContext_Reader__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LogicalCallContext_Reader__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LogicalCallContext_Reader__Class* get_class() {
            return il2cpp::get_nested_class<app::LogicalCallContext_Reader__Class>(type_info(), "System.Runtime.Remoting.Messaging", "LogicalCallContext", "Reader");
        }
        inline app::LogicalCallContext_Reader* create() {
            return il2cpp::create_object<app::LogicalCallContext_Reader>(get_class());
        }
        inline app::LogicalCallContext_Reader__Boxed* box(app::LogicalCallContext_Reader value) {
            return il2cpp::box_value<app::LogicalCallContext_Reader__Boxed>(get_class(), value);
        }
    } // namespace LogicalCallContext_Reader
} // namespace app::classes::types
