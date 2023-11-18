#pragma once
#include <Modloader/app/structs/DefaultValueHandling__Enum.h>
#include <Modloader/app/structs/DefaultValueHandling__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DefaultValueHandling__Enum {
        inline app::DefaultValueHandling__Enum__Class** type_info() {
            static app::DefaultValueHandling__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DefaultValueHandling__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DefaultValueHandling__Enum__Class* get_class() {
            return il2cpp::get_class<app::DefaultValueHandling__Enum__Class>(type_info(), "Newtonsoft.Json", "DefaultValueHandling");
        }
        inline app::DefaultValueHandling__Enum* create() {
            return il2cpp::create_object<app::DefaultValueHandling__Enum>(get_class());
        }
    } // namespace DefaultValueHandling__Enum
} // namespace app::classes::types
