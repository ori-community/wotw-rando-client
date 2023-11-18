#pragma once
#include <Modloader/app/structs/ConstructorHandling__Enum.h>
#include <Modloader/app/structs/ConstructorHandling__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConstructorHandling__Enum {
        inline app::ConstructorHandling__Enum__Class** type_info() {
            static app::ConstructorHandling__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ConstructorHandling__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ConstructorHandling__Enum__Class* get_class() {
            return il2cpp::get_class<app::ConstructorHandling__Enum__Class>(type_info(), "Newtonsoft.Json", "ConstructorHandling");
        }
        inline app::ConstructorHandling__Enum* create() {
            return il2cpp::create_object<app::ConstructorHandling__Enum>(get_class());
        }
    } // namespace ConstructorHandling__Enum
} // namespace app::classes::types
