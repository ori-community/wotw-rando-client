#pragma once
#include <Modloader/app/structs/Required__Enum.h>
#include <Modloader/app/structs/Required__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Required__Enum {
        inline app::Required__Enum__Class** type_info() {
            static app::Required__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Required__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Required__Enum__Class* get_class() {
            return il2cpp::get_class<app::Required__Enum__Class>(type_info(), "Newtonsoft.Json", "Required");
        }
        inline app::Required__Enum* create() {
            return il2cpp::create_object<app::Required__Enum>(get_class());
        }
    } // namespace Required__Enum
} // namespace app::classes::types
