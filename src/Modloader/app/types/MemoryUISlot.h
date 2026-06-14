#pragma once
#include <Modloader/app/structs/MemoryUISlot.h>
#include <Modloader/app/structs/MemoryUISlot__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MemoryUISlot {
        inline app::MemoryUISlot__Class** type_info() {
            static app::MemoryUISlot__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MemoryUISlot__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MemoryUISlot__Class* get_class() {
            return il2cpp::get_class<app::MemoryUISlot__Class>(type_info(), "", "MemoryUISlot");
        }
        inline app::MemoryUISlot* create() {
            return il2cpp::create_object<app::MemoryUISlot>(get_class());
        }
    } // namespace MemoryUISlot
} // namespace app::classes::types
