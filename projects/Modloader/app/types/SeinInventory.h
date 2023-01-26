#pragma once
#include <Modloader/app/structs/SeinInventory.h>
#include <Modloader/app/structs/SeinInventory__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinInventory {
        inline app::SeinInventory__Class** type_info() {
            static app::SeinInventory__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinInventory__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinInventory__Class* get_class() {
            return il2cpp::get_class<app::SeinInventory__Class>(type_info(), "", "SeinInventory");
        }
        inline app::SeinInventory* create() {
            return il2cpp::create_object<app::SeinInventory>(get_class());
        }
    } // namespace SeinInventory
} // namespace app::classes::types
