#pragma once
#include <Modloader/app/structs/StatUISlot.h>
#include <Modloader/app/structs/StatUISlot__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StatUISlot {
        inline app::StatUISlot__Class** type_info() {
            static app::StatUISlot__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StatUISlot__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StatUISlot__Class* get_class() {
            return il2cpp::get_class<app::StatUISlot__Class>(type_info(), "", "StatUISlot");
        }
        inline app::StatUISlot* create() {
            return il2cpp::create_object<app::StatUISlot>(get_class());
        }
    } // namespace StatUISlot
} // namespace app::classes::types
