#pragma once
#include <Modloader/app/structs/UberScreenMode__Enum.h>
#include <Modloader/app/structs/UberScreenMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberScreenMode__Enum {
        inline app::UberScreenMode__Enum__Class** type_info() {
            static app::UberScreenMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberScreenMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberScreenMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::UberScreenMode__Enum__Class>(type_info(), "", "UberScreenMode");
        }
        inline app::UberScreenMode__Enum* create() {
            return il2cpp::create_object<app::UberScreenMode__Enum>(get_class());
        }
    } // namespace UberScreenMode__Enum
} // namespace app::classes::types
