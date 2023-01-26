#pragma once
#include <Modloader/app/structs/MemoryCounter.h>
#include <Modloader/app/structs/MemoryCounter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MemoryCounter {
        inline app::MemoryCounter__Class** type_info() {
            static app::MemoryCounter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MemoryCounter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MemoryCounter__Class* get_class() {
            return il2cpp::get_class<app::MemoryCounter__Class>(type_info(), "", "MemoryCounter");
        }
        inline app::MemoryCounter* create() {
            return il2cpp::create_object<app::MemoryCounter>(get_class());
        }
    } // namespace MemoryCounter
} // namespace app::classes::types
