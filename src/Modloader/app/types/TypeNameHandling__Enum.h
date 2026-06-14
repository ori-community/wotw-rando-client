#pragma once
#include <Modloader/app/structs/TypeNameHandling__Enum.h>
#include <Modloader/app/structs/TypeNameHandling__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TypeNameHandling__Enum {
        inline app::TypeNameHandling__Enum__Class** type_info() {
            static app::TypeNameHandling__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TypeNameHandling__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TypeNameHandling__Enum__Class* get_class() {
            return il2cpp::get_class<app::TypeNameHandling__Enum__Class>(type_info(), "Newtonsoft.Json", "TypeNameHandling");
        }
        inline app::TypeNameHandling__Enum* create() {
            return il2cpp::create_object<app::TypeNameHandling__Enum>(get_class());
        }
    } // namespace TypeNameHandling__Enum
} // namespace app::classes::types
