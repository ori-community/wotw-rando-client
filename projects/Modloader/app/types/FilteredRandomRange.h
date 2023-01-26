#pragma once
#include <Modloader/app/structs/FilteredRandomRange.h>
#include <Modloader/app/structs/FilteredRandomRange__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FilteredRandomRange {
        inline app::FilteredRandomRange__Class** type_info() {
            static app::FilteredRandomRange__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FilteredRandomRange__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FilteredRandomRange__Class* get_class() {
            return il2cpp::get_class<app::FilteredRandomRange__Class>(type_info(), "Moon", "FilteredRandomRange");
        }
        inline app::FilteredRandomRange* create() {
            return il2cpp::create_object<app::FilteredRandomRange>(get_class());
        }
    } // namespace FilteredRandomRange
} // namespace app::classes::types
