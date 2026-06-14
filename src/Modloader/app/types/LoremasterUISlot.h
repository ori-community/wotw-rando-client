#pragma once
#include <Modloader/app/structs/LoremasterUISlot.h>
#include <Modloader/app/structs/LoremasterUISlot__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LoremasterUISlot {
        inline app::LoremasterUISlot__Class** type_info() {
            static app::LoremasterUISlot__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LoremasterUISlot__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LoremasterUISlot__Class* get_class() {
            return il2cpp::get_class<app::LoremasterUISlot__Class>(type_info(), "", "LoremasterUISlot");
        }
        inline app::LoremasterUISlot* create() {
            return il2cpp::create_object<app::LoremasterUISlot>(get_class());
        }
    } // namespace LoremasterUISlot
} // namespace app::classes::types
