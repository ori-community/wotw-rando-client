#pragma once
#include <Modloader/app/structs/ModularZone.h>
#include <Modloader/app/structs/ModularZone__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ModularZone {
        inline app::ModularZone__Class** type_info() {
            static app::ModularZone__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ModularZone__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ModularZone__Class* get_class() {
            return il2cpp::get_class<app::ModularZone__Class>(type_info(), "", "ModularZone");
        }
        inline app::ModularZone* create() {
            return il2cpp::create_object<app::ModularZone>(get_class());
        }
    } // namespace ModularZone
} // namespace app::classes::types
