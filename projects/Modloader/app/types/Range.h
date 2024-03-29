#pragma once
#include <Modloader/app/structs/Range.h>
#include <Modloader/app/structs/Range__Boxed.h>
#include <Modloader/app/structs/Range__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Range {
        inline app::Range__Class** type_info() {
            static app::Range__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Range__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Range__Class* get_class() {
            return il2cpp::get_class<app::Range__Class>(type_info(), "System.Data", "Range");
        }
        inline app::Range* create() {
            return il2cpp::create_object<app::Range>(get_class());
        }
        inline app::Range__Boxed* box(app::Range value) {
            return il2cpp::box_value<app::Range__Boxed>(get_class(), value);
        }
    } // namespace Range
} // namespace app::classes::types
