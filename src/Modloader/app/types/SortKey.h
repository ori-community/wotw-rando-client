#pragma once
#include <Modloader/app/structs/SortKey.h>
#include <Modloader/app/structs/SortKey__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SortKey {
        inline app::SortKey__Class** type_info() {
            static app::SortKey__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SortKey__Class**)(modloader::win::memory::resolve_rva(0x047136A8));
            }
            return cache;
        }
        inline app::SortKey__Class* get_class() {
            return il2cpp::get_class<app::SortKey__Class>(type_info(), "System.Globalization", "SortKey");
        }
        inline app::SortKey* create() {
            return il2cpp::create_object<app::SortKey>(get_class());
        }
    } // namespace SortKey
} // namespace app::classes::types
