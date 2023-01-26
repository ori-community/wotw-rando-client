#pragma once
#include <Modloader/app/structs/DrivableExecutionOrder__Enum.h>
#include <Modloader/app/structs/DrivableExecutionOrder__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DrivableExecutionOrder__Enum {
        inline app::DrivableExecutionOrder__Enum__Class** type_info() {
            static app::DrivableExecutionOrder__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DrivableExecutionOrder__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DrivableExecutionOrder__Enum__Class* get_class() {
            return il2cpp::get_class<app::DrivableExecutionOrder__Enum__Class>(type_info(), "Moon", "DrivableExecutionOrder");
        }
        inline app::DrivableExecutionOrder__Enum* create() {
            return il2cpp::create_object<app::DrivableExecutionOrder__Enum>(get_class());
        }
    } // namespace DrivableExecutionOrder__Enum
} // namespace app::classes::types
