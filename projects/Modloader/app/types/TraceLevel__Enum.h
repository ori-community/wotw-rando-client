#pragma once
#include <Modloader/app/structs/TraceLevel__Enum.h>
#include <Modloader/app/structs/TraceLevel__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TraceLevel__Enum {
        inline app::TraceLevel__Enum__Class** type_info() {
            static app::TraceLevel__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TraceLevel__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TraceLevel__Enum__Class* get_class() {
            return il2cpp::get_class<app::TraceLevel__Enum__Class>(type_info(), "System.Diagnostics", "TraceLevel");
        }
        inline app::TraceLevel__Enum* create() {
            return il2cpp::create_object<app::TraceLevel__Enum>(get_class());
        }
    } // namespace TraceLevel__Enum
} // namespace app::classes::types
