#pragma once
#include <Modloader/app/structs/CausalitySynchronousWork__Enum.h>
#include <Modloader/app/structs/CausalitySynchronousWork__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CausalitySynchronousWork__Enum {
        inline app::CausalitySynchronousWork__Enum__Class** type_info() {
            static app::CausalitySynchronousWork__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CausalitySynchronousWork__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CausalitySynchronousWork__Enum__Class* get_class() {
            return il2cpp::get_class<app::CausalitySynchronousWork__Enum__Class>(type_info(), "System.Threading.Tasks", "CausalitySynchronousWork");
        }
        inline app::CausalitySynchronousWork__Enum* create() {
            return il2cpp::create_object<app::CausalitySynchronousWork__Enum>(get_class());
        }
    } // namespace CausalitySynchronousWork__Enum
} // namespace app::classes::types
