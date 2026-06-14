#pragma once
#include <Modloader/app/structs/DropCurrentlyHeldItem.h>
#include <Modloader/app/structs/DropCurrentlyHeldItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DropCurrentlyHeldItem {
        inline app::DropCurrentlyHeldItem__Class** type_info() {
            static app::DropCurrentlyHeldItem__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DropCurrentlyHeldItem__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DropCurrentlyHeldItem__Class* get_class() {
            return il2cpp::get_class<app::DropCurrentlyHeldItem__Class>(type_info(), "", "DropCurrentlyHeldItem");
        }
        inline app::DropCurrentlyHeldItem* create() {
            return il2cpp::create_object<app::DropCurrentlyHeldItem>(get_class());
        }
    } // namespace DropCurrentlyHeldItem
} // namespace app::classes::types
