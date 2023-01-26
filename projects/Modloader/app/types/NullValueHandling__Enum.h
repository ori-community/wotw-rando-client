#pragma once
#include <Modloader/app/structs/NullValueHandling__Enum.h>
#include <Modloader/app/structs/NullValueHandling__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NullValueHandling__Enum {
        inline app::NullValueHandling__Enum__Class** type_info() {
            static app::NullValueHandling__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NullValueHandling__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NullValueHandling__Enum__Class* get_class() {
            return il2cpp::get_class<app::NullValueHandling__Enum__Class>(type_info(), "Newtonsoft.Json", "NullValueHandling");
        }
        inline app::NullValueHandling__Enum* create() {
            return il2cpp::create_object<app::NullValueHandling__Enum>(get_class());
        }
    } // namespace NullValueHandling__Enum
} // namespace app::classes::types
