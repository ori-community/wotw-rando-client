#pragma once
#include <Modloader/app/structs/SearchOption__Enum.h>
#include <Modloader/app/structs/SearchOption__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SearchOption__Enum {
        inline app::SearchOption__Enum__Class** type_info() {
            static app::SearchOption__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SearchOption__Enum__Class**)(modloader::win::memory::resolve_rva(0x04713CF0));
            }
            return cache;
        }
        inline app::SearchOption__Enum__Class* get_class() {
            return il2cpp::get_class<app::SearchOption__Enum__Class>(type_info(), "System.IO", "SearchOption");
        }
        inline app::SearchOption__Enum* create() {
            return il2cpp::create_object<app::SearchOption__Enum>(get_class());
        }
    } // namespace SearchOption__Enum
} // namespace app::classes::types
