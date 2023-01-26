#pragma once
#include <Modloader/app/structs/EntityHandling__Enum.h>
#include <Modloader/app/structs/EntityHandling__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityHandling__Enum {
        inline app::EntityHandling__Enum__Class** type_info() {
            static app::EntityHandling__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EntityHandling__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EntityHandling__Enum__Class* get_class() {
            return il2cpp::get_class<app::EntityHandling__Enum__Class>(type_info(), "System.Xml", "EntityHandling");
        }
        inline app::EntityHandling__Enum* create() {
            return il2cpp::create_object<app::EntityHandling__Enum>(get_class());
        }
    } // namespace EntityHandling__Enum
} // namespace app::classes::types
