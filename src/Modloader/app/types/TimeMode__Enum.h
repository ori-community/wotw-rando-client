#pragma once
#include <Modloader/app/structs/TimeMode__Enum.h>
#include <Modloader/app/structs/TimeMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimeMode__Enum {
        inline app::TimeMode__Enum__Class** type_info() {
            static app::TimeMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TimeMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TimeMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::TimeMode__Enum__Class>(type_info(), "", "TimeMode");
        }
        inline app::TimeMode__Enum* create() {
            return il2cpp::create_object<app::TimeMode__Enum>(get_class());
        }
    } // namespace TimeMode__Enum
} // namespace app::classes::types
