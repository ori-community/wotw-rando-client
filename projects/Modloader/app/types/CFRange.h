#pragma once
#include <Modloader/app/structs/CFRange.h>
#include <Modloader/app/structs/CFRange__Boxed.h>
#include <Modloader/app/structs/CFRange__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CFRange {
        inline app::CFRange__Class** type_info() {
            static app::CFRange__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CFRange__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CFRange__Class* get_class() {
            return il2cpp::get_class<app::CFRange__Class>(type_info(), "Mono.Net", "CFRange");
        }
        inline app::CFRange* create() {
            return il2cpp::create_object<app::CFRange>(get_class());
        }
        inline app::CFRange__Boxed* box(app::CFRange value) {
            return il2cpp::box_value<app::CFRange__Boxed>(get_class(), value);
        }
    } // namespace CFRange
} // namespace app::classes::types
