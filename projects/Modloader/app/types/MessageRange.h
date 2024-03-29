#pragma once
#include <Modloader/app/structs/MessageRange.h>
#include <Modloader/app/structs/MessageRange__Boxed.h>
#include <Modloader/app/structs/MessageRange__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MessageRange {
        inline app::MessageRange__Class** type_info() {
            static app::MessageRange__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MessageRange__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MessageRange__Class* get_class() {
            return il2cpp::get_class<app::MessageRange__Class>(type_info(), "Moon.Timeline", "MessageRange");
        }
        inline app::MessageRange* create() {
            return il2cpp::create_object<app::MessageRange>(get_class());
        }
        inline app::MessageRange__Boxed* box(app::MessageRange value) {
            return il2cpp::box_value<app::MessageRange__Boxed>(get_class(), value);
        }
    } // namespace MessageRange
} // namespace app::classes::types
