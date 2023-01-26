#pragma once
#include <Modloader/app/structs/AsyncCausalityStatus__Enum.h>
#include <Modloader/app/structs/AsyncCausalityStatus__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AsyncCausalityStatus__Enum {
        inline app::AsyncCausalityStatus__Enum__Class** type_info() {
            static app::AsyncCausalityStatus__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AsyncCausalityStatus__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AsyncCausalityStatus__Enum__Class* get_class() {
            return il2cpp::get_class<app::AsyncCausalityStatus__Enum__Class>(type_info(), "System.Threading.Tasks", "AsyncCausalityStatus");
        }
        inline app::AsyncCausalityStatus__Enum* create() {
            return il2cpp::create_object<app::AsyncCausalityStatus__Enum>(get_class());
        }
    } // namespace AsyncCausalityStatus__Enum
} // namespace app::classes::types
