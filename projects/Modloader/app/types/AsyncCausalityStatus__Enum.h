#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AsyncCausalityStatus__Enum {
        namespace {
            inline app::AsyncCausalityStatus__Enum__Class* type_info_ref = nullptr;
        }
        inline app::AsyncCausalityStatus__Enum__Class** type_info = &type_info_ref;
        inline app::AsyncCausalityStatus__Enum__Class* get_class() {
            return il2cpp::get_class<app::AsyncCausalityStatus__Enum__Class>(type_info, "System.Threading.Tasks", "AsyncCausalityStatus");
        }
        inline app::AsyncCausalityStatus__Enum* create() {
            return il2cpp::create_object<app::AsyncCausalityStatus__Enum>(get_class());
        }
    } // namespace AsyncCausalityStatus__Enum
} // namespace app::classes::types
