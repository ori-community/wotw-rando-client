#pragma once
#include <Modloader/app/structs/CausalityTraceLevel__Enum.h>
#include <Modloader/app/structs/CausalityTraceLevel__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CausalityTraceLevel__Enum {
        inline app::CausalityTraceLevel__Enum__Class** type_info() {
            static app::CausalityTraceLevel__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CausalityTraceLevel__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CausalityTraceLevel__Enum__Class* get_class() {
            return il2cpp::get_class<app::CausalityTraceLevel__Enum__Class>(type_info(), "System.Threading.Tasks", "CausalityTraceLevel");
        }
        inline app::CausalityTraceLevel__Enum* create() {
            return il2cpp::create_object<app::CausalityTraceLevel__Enum>(get_class());
        }
    } // namespace CausalityTraceLevel__Enum
} // namespace app::classes::types
