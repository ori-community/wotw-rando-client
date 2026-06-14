#pragma once
#include <Modloader/app/structs/Consistency__Enum.h>
#include <Modloader/app/structs/Consistency__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Consistency__Enum {
        inline app::Consistency__Enum__Class** type_info() {
            static app::Consistency__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Consistency__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Consistency__Enum__Class* get_class() {
            return il2cpp::get_class<app::Consistency__Enum__Class>(type_info(), "System.Runtime.ConstrainedExecution", "Consistency");
        }
        inline app::Consistency__Enum* create() {
            return il2cpp::create_object<app::Consistency__Enum>(get_class());
        }
    } // namespace Consistency__Enum
} // namespace app::classes::types
