#pragma once
#include <Modloader/app/structs/ObjectCreationHandling__Enum.h>
#include <Modloader/app/structs/ObjectCreationHandling__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ObjectCreationHandling__Enum {
        inline app::ObjectCreationHandling__Enum__Class** type_info() {
            static app::ObjectCreationHandling__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ObjectCreationHandling__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ObjectCreationHandling__Enum__Class* get_class() {
            return il2cpp::get_class<app::ObjectCreationHandling__Enum__Class>(type_info(), "Newtonsoft.Json", "ObjectCreationHandling");
        }
        inline app::ObjectCreationHandling__Enum* create() {
            return il2cpp::create_object<app::ObjectCreationHandling__Enum>(get_class());
        }
    } // namespace ObjectCreationHandling__Enum
} // namespace app::classes::types
