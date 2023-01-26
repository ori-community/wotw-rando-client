#pragma once
#include <Modloader/app/structs/ModularZone_Target__Enum.h>
#include <Modloader/app/structs/ModularZone_Target__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ModularZone_Target__Enum {
        inline app::ModularZone_Target__Enum__Class** type_info() {
            static app::ModularZone_Target__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ModularZone_Target__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ModularZone_Target__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ModularZone_Target__Enum__Class>(type_info(), "", "ModularZone", "Target");
        }
        inline app::ModularZone_Target__Enum* create() {
            return il2cpp::create_object<app::ModularZone_Target__Enum>(get_class());
        }
    } // namespace ModularZone_Target__Enum
} // namespace app::classes::types
