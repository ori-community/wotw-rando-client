#pragma once
#include <Modloader/app/structs/CCTextRangeColorer.h>
#include <Modloader/app/structs/CCTextRangeColorer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CCTextRangeColorer {
        inline app::CCTextRangeColorer__Class** type_info() {
            static app::CCTextRangeColorer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CCTextRangeColorer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CCTextRangeColorer__Class* get_class() {
            return il2cpp::get_class<app::CCTextRangeColorer__Class>(type_info(), "", "CCTextRangeColorer");
        }
        inline app::CCTextRangeColorer* create() {
            return il2cpp::create_object<app::CCTextRangeColorer>(get_class());
        }
    } // namespace CCTextRangeColorer
} // namespace app::classes::types
