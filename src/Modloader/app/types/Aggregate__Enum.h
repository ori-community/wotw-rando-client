#pragma once
#include <Modloader/app/structs/Aggregate__Enum.h>
#include <Modloader/app/structs/Aggregate__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Aggregate__Enum {
        inline app::Aggregate__Enum__Class** type_info() {
            static app::Aggregate__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Aggregate__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Aggregate__Enum__Class* get_class() {
            return il2cpp::get_class<app::Aggregate__Enum__Class>(type_info(), "System.Data", "Aggregate");
        }
        inline app::Aggregate__Enum* create() {
            return il2cpp::create_object<app::Aggregate__Enum>(get_class());
        }
    } // namespace Aggregate__Enum
} // namespace app::classes::types
