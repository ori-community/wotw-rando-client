#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CausalityTraceLevel__Enum {
        namespace {
            inline app::CausalityTraceLevel__Enum__Class* type_info_ref = nullptr;
        }
        inline app::CausalityTraceLevel__Enum__Class** type_info = &type_info_ref;
        inline app::CausalityTraceLevel__Enum__Class* get_class() {
            return il2cpp::get_class<app::CausalityTraceLevel__Enum__Class>(type_info, "System.Threading.Tasks", "CausalityTraceLevel");
        }
        inline app::CausalityTraceLevel__Enum* create() {
            return il2cpp::create_object<app::CausalityTraceLevel__Enum>(get_class());
        }
    } // namespace CausalityTraceLevel__Enum
} // namespace app::classes::types
